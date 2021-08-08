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

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> g[N],vis(N),ans;

void dfs(int s){
	ans.pb(s);
	vis[s]=1;
	vector<int> ord;
	for(int i:g[s])
		if(!vis[i]) ord.pb(i);
	sort(all(ord));
	for(int i:ord) {
		//ans.pb(i);
		dfs(i);
		ans.pb(s);
	}
	//ans.pb(s);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y;
	cin>>n;
	rep(i,1,n){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1);
	for(int i:ans) cout<<i<<" ";
}




