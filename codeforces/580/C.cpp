#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define N 200010
vector<int> G[N],vis(N),cat(N),tot(N),deg(N),mx(N);

void dfs(int s){
	vis[s]=1;
	for(int i:G[s])	if(!vis[i]){
		if(cat[i]) tot[i]=tot[s]+1;
		else tot[i]=0;
		mx[i]=max(mx[s],tot[i]);
		dfs(i);
	}	
}


signed main(){
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,x,y,i,ans=0;
	cin >> n >>k;
	for (int i = 1; i<=n; ++i)
		cin>>cat[i];
	for(int i=1;i< n;i++){
		cin>>x>>y;
		G[x].pb(y);
		G[y].pb(x);
		deg[x]++;deg[y]++;
		}
	if(cat[1]) tot[1]=mx[1]=1; 
	dfs(1);
	//for(int i=1;i<=n;i++) cout<<i<<"->"<<mx[i]<<endl;
	for(int i=2;i<=n;i++){
		if(deg[i]==1 and mx[i]<=k) ans++; 
	}


	cout<<ans;
	
	return 0;
}
 