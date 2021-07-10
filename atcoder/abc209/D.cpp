#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=200100;
 
vector<int> g[N],in(N),out(N),dis(N);
vector<vector<int>> up(N,vector<int> (20));
int t=0;
 
void dfs(int s,int p){
	in[s]=++t;
	up[s][0]=p;
	dis[s]=dis[p]+1;
	rep(i,1,20) up[s][i]=up[up[s][i-1]][i-1];
	for(int i:g[s]) if(i!=p) dfs(i,s); 
	out[s]=++t;
}
 
bool anc(int a,int b){
	return in[a]<=in[b] and out[a]>=out[b];
}
 
int lca(int a,int b){
	if(anc(a,b)) return a;
	if(anc(b,a)) return b;
	for(int i=19;i>=0;i--)
		if(!anc(up[a][i],b)) a=up[a][i];
	return up[a][0];
}
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q,a,b,x,y;
	cin>>n>>q;
	rep(i,2,n+1){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1,1);
	while(q--){
		cin>>a>>b;
		int c=lca(a,b);
		int d=dis[a]+dis[b]-2*dis[c];
		if(d%2) cout<<"Road\n";
		else cout<<"Town\n";
	}
}