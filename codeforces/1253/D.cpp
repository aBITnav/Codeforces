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

vector<int> g[N],vis(N);

void dfs(int s,int &mx,int &mn){
	vis[s]=1;
	mx=max(mx,s);
	mn=min(mn,s);
	for(int i:g[s]) if(!vis[i]) dfs(i,mx,mn);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y;
	cin>>n>>m;
	while(m--){
		cin>>x>>y;
		x--;y--;
		g[x].pb(y);
		g[y].pb(x);
	}
	vector<pair<int,int>> v;
	rep(i,0,n)	if(!vis[i]){
		int mx=i,mn=i;
		dfs(i,mx,mn);
		v.pb({mn,mx});
	}
	sort(all(v));
	stack<pair<int,int>> s;
	s.push(v[0]);
	for(int i=1;i<v.size();i++){
		if(v[i].fi<s.top().se){
			s.top().se=max(s.top().se,v[i].se);
		}
		else s.push(v[i]);
	}
	cout<<v.size()-s.size();
	
	
	
}



