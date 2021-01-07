#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

void dfs(vector<int> g[],vector<int>& vis,vector<int> &b,vector<int>&ans,int s){
	if(!b[s]){
		ans.pb(s);
		for(int i:g[s]) b[i]=1;
	}
	b[s]=vis[s]=1;
	for(int i:g[s]) if(!vis[i])	dfs(g,vis,b,ans,i);
}

void solve() {
	int n,c=0,m,x,y;
	cin>>n>>m;
	vector<int> g[n+1],vis(n+1),ans,b(n+1);
	while(m--){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	rep(i,1,n+1)	if(!vis[i]) {
		c++;
		dfs(g,vis,b,ans,i);
	}
	if(c>1){
		cout<<"NO\n";
		return;
	}	
	
	cout<<"YES\n"<<ans.size()<<"\n";
	for(int i:ans) cout<<i<<" ";
	cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



