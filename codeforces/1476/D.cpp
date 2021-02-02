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
 
void dfs(int p,int& c,vector<int>& com,vector<int> g[],vector<int> &vis){
	vis[p]=1;
	c++;
	com.pb(p);
	for(int i:g[p])	if(!vis[i])
		dfs(i,c,com,g,vis);
}
 
void solve() {
	int n;
	string s;
	cin>>n>>s;
	vector<int> g[2*n+5],vis(2*n+5),ans(2*n+5);
	rep(i,0,n){
		if(s[i]=='L') {
			g[i+1].push_back(i+n+1);
			g[i+n+1].push_back(i+1);
		}
		else{
			g[i].push_back(i+n+2);
			g[i+n+2].push_back(i);
		}
	}
	rep(i,0,n+1){
		if(!vis[i]) {
			int c=0;
			vector<int> com;
			dfs(i,c,com,g,vis);
			for(int i:com) ans[i]=c;
		}
	}
	
	rep(i,0,n+1) cout<<ans[i]<<" ";cout<<"\n";
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}
 