#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define vi			vector<int>
const int M= 998244353,N=2001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

void dfs(vi g[],vi &vis,int s,vi &c,bool& b,int& cnt0,int& cnt1){
	if(c[s]==0) cnt0++;
	else cnt1++;
	vis[s]=1;
	for(int i:g[s]){
		if(c[i]==c[s]) b=false;
		if(!vis[i]) {
			c[i]=(c[s]+1)%2;
			dfs(g,vis,i,c,b,cnt0,cnt1);
		}
	}
}

void solve() {
	int x,y,n,m;
	cin>>n>>m;
	vi g[n],c(n,-1),vis(n);
	while(m--){
		cin>>x>>y;
		x--;y--;
		g[x].pb(y);
		g[y].pb(x);
	}
	int ans=1;
	rep(i,0,n){
		if(!vis[i]){
			c[i]=0;
			bool b=true;
			int cnt0=0,cnt1=0;
			dfs(g,vis,i,c,b,cnt0,cnt1);
			if(!b){
				cout<<"0\n";
				return;
			}
			ans=mm(ans,po(2,cnt0)+po(2,cnt1));
		}
	}
	//for(int i:c) cout<<i<<" ";
	cout<<ans<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




