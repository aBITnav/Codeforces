#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

vector<int> g[N],o,sol(N);

void dfs(int s,int p){
	o.pb(s);
	for(int i:g[s]) if(i!=p) dfs(i,s);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,s=0,x,y,ans=1e18;
	cin>>n;
	int cost[3][n+1];
	rep(i,0,3) rep(j,1,n+1) cin>>cost[i][j];
	rep(i,1,n){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	rep(i,1,n+1)
		if(g[i].size()==1) s=i;
		else if(g[i].size()>2){
			cout<<"-1";
			return 0;
		}
	dfs(s,0);
	vector<int> p={0,1,2},per;
	do{
		int c=0;
		for(int i=0;i<n;i++) c+=cost[p[i%3]][o[i]];
		if(c<ans) ans=c,per=p;
	}while(next_permutation(all(p)));
	for(int i=0;i<n;i++) sol[o[i]]=per[i%3]+1;
	cout<<ans<<endl;
	for(int i=1;i<=n;i++) cout<<sol[i]<<" ";
}




