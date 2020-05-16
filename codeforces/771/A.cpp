#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define se second
#define pi pair<int,int>

int par[200000],sz[200000],deg[200000];

int find(int n){
	if(n==par[n]) return n;
	return par[n]=find(par[n]);
}
void un(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
	if(sz[a]<sz[b]) swap(a,b);
	par[b]=a;
	sz[a]+=sz[b];}
}




signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int m,n,x,y;
	string ans="Yes";
	cin>>n>>m;
	for(int i=1;i<=n;i++) sz[i]=1,par[i]=i;
	while(m--){
		cin>>x>>y;
		un(x,y);
		deg[x]++;deg[y]++;
	}
	//for(int i=1;i<=n;i++) cout<<i<<" -> "<<sz[i]<<"  "<<par[i]<<endl;
	for(int i=1;i<=n;i++)
		if(sz[find(i)]-1!=deg[i]) ans="No"; 
	cout<<ans;
	
}


