#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n[4],t,x,y;
	rep(i,0,4) cin>>n[i];
	vector<int> v[4];
	int mx=max({n[0],n[1],n[2],n[3]})+1;
	vector<int> m[4][mx];
	rep(i,0,4){
		rep(j,0,n[i]){
			cin>>x;
			v[i].pb(x);
		}
	}
	rep(i,1,4){
		cin>>t;
		while(t--){
			cin>>x>>y;
			m[i][y-1].pb(x-1);
		}
	}
	multiset<int> ms(all(v[0]));
	rep(i,1,4){
		rep(j,0,n[i]){
			for(int k:m[i][j])	{
				auto temp=ms.find(v[i-1][k]);
				ms.erase(temp);	
			}
			if(ms.empty()) v[i][j]=1e18;
			else	v[i][j]+=(*ms.begin());
			for(int k:m[i][j])	ms.insert(v[i-1][k]);
		}
		ms.clear();
		for(int j:v[i]) ms.insert(j);
	}
	if(ms.empty()) cout<<"-1";
	else if((*ms.begin())>1e12) cout<<"-1";
	else cout<<(*ms.begin());
}




