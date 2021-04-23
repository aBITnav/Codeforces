#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define endl		"\n"
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int n,k,x,s=0;
	cin>>n>>k;
	map<int,int> m;
	queue<int> q;
	rep(i,0,n){
		cin>>x;
		q.push(x);
		m[x]=0;
	}
	while(1){
		x=q.front();
		q.pop();
		if(!m.count(x+1)){
			q.push(x+1);
			m[x+1]=m[x]+1;
		}
		if(m.size()>=n+k) break;
		if(!m.count(x-1)){
			q.push(x-1);
			m[x-1]=m[x]+1;
		}
		if(m.size()>=n+k) break;
	}
	for(auto i:m) s+=i.se;
	cout<<s<<endl;
	for(auto i:m) if(i.se!=0) cout<<i.fi<<" ";
}




