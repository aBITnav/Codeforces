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

void dfs(int s,int p,vector<int> g[],vector<int>&vis,bool &cyc){
	vis[s]=1;	
	for(int i:g[s]){
		if(!vis[i])	dfs(i,s,g,vis,cyc);
		else if(i!=p) cyc=1;
	}
}

void solve() {
	int n,k,x,y,d=0,c=0;
	cin>>n>>k;
	vector<int> g[n+1],vis(n+1);
	rep(i,0,k){
		cin>>x>>y;
		if(x==y) {
			d++;continue;
		}
		g[x].pb(y);
		g[y].pb(x);
	}
	rep(i,1,n+1) if(!vis[i]) {
		bool cyc=false;
		dfs(i,0,g,vis,cyc);
		if(cyc) c++;
	}
	cout<<k-d+c<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



