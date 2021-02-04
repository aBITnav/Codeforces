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
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> g[N],vis(N),c(N);
map<int,set<int>> mp;

void dfs(int s){
	vis[s]=1;
	for(int i:g[s]){
		if(!vis[i]) dfs(i);
		if(c[i]!=c[s])	mp[c[s]].insert(c[i]);
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,ans=0,mx=0;
	cin>>n>>m;
	rep(i,1,n+1) cin>>c[i];
	while(m--){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	rep(i,1,n+1) if(!vis[i]) dfs(i);
	sort(c.begin()+1,c.begin()+n+1);
	rep(i,1,n+1){
		if(mp[c[i]].size()+1>mx) mx=mp[c[i]].size()+1,ans=c[i];
	}
	cout<<ans;
}



