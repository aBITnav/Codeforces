#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y;
	cin>>t;
	while(t--){
		unordered_map<int,int> mp;
		cin>>n>>k;
		for(int i=0;i<n;i++) {
			cin>>x;
			mp[x]++;	
		}
		if(mp.size()>k) cout<<-1<<endl;
		else{
			int mx=0,p=0;
			vector<int> v(k,1);
			for(auto i:mp) {
				mx=max(mx,i.se);
				v[p++]=i.fi;	
			}
			int l=k*n;
			cout<<l<<endl;
			for(int i=0;i<l;i++)
				cout<<v[i%k]<<" ";
			cout<<endl;
		}

	}
	return 0;
}


