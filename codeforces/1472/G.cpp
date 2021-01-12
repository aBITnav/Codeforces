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
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

void dfs(vector<int> g[],vector<int>& vis,vector<int>& dis,int s){
	vis[s]=1;
	for(int i:g[s]){
		if(!vis[i])
			dfs(g,vis,dis,i);
		dis[s]=min(dis[s],dis[i]);
	}
}


void solve() {
	int n,m,x,y;
	cin>>n>>m;
	vector<int> g[n+1],dis(n+1),vis(n+1),ye(n+1),r[n+1];
	vector<pair<int,int>> ed;
	while(m--){
		cin>>x>>y;
		ed.pb({x,y});
		g[x].pb(y);
	}
	queue<int> q;
	q.push(1);
	dis[1]=1;
	while(!q.empty()){
		int p=q.front();	
		q.pop();
		for(int i:g[p]) if(!dis[i]){
			dis[i]=dis[p]+1;
			q.push(i);
		}
	}
	for(auto i:ed)
		if(dis[i.fi]<dis[i.se]) r[i.fi].pb(i.se);
	
	rep(i,1,n+1){
		ye[i]=dis[i];
		for(int j:g[i]) ye[i]=min(ye[i],dis[j]);
	}
	rep(i,1,n+1) if(!vis[i]) dfs(r,vis,ye,i);
	rep(i,1,n+1) cout<<ye[i]-1<<"  ";cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



