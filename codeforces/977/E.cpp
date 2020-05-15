#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define pi pair<int,int>
vector<int> g[200005],vis(200005),deg(200005);

void dfs(int s,bool &f){
	vis[s]=1;
	if(deg[s]!=2) f=false;
	for(int i:g[s])
		if(!vis[i]) dfs(i,f);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y;
	cin>>n>>m;
	
	while(m--){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
		deg[x]++;deg[y]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		//cout<<i<<" -> "<<deg[i]<<endl;
		bool f=true;
		if(!vis[i]) {
		dfs(i,f);
		if(f) ans++;}
	}
	cout<<ans;
}


