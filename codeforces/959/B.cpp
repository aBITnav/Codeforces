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
	int n,k,m,x,y;
	cin>>n>>k>>m;
	string s;
	map<string,int> mp;
	for(int i=1;i<n+1;i++){
		cin>>s;
		mp[s]=i;
	}
	int c[n+1];
	for(int i=1;i<n+1;i++) cin>>c[i];
	while(k--){
		cin>>x;
		int mn=1e9;
		int v[x];
		for(int i=0;i<x;i++){
			cin>>v[i];
			mn=min(mn,c[v[i]]);
		}
		for(int i=0;i<x;i++) {
			c[v[i]]=mn;
		}
	}
	int ans=0;
	while(m--){
		cin>>s;
		ans+=c[mp[s]];
	}
	cout<<ans;
	
}


