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
 
vector<int> g[N],in(N),out(N),s(N,1);
int n;
void dfs(int u,int p){
	for(int i:g[u]) if(i!=p){
		dfs(i,u);
		s[u]+=s[i];
		in[u]+=in[i]+s[i];
	}
}
 
void dfs2(int u,int p){
	int sum=0;
	for(int i:g[u]) if(i!=p) sum+=in[i]+s[i]+s[i]; 	
	for(int i:g[u]) if(i!=p) {
		out[i]=(out[u] + (n-s[u]+1)) + (sum - (in[i] + s[i]*2));
		dfs2(i,u);
	}
}
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x,y;
	cin>>n;
	rep(i,1,n){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1,0);
	dfs2(1,0);
	rep(i,1,n+1)
		cout<<in[i]+out[i]<<endl;
}