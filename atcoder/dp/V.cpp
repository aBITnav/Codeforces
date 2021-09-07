#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int N=105001;
int M;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> g[N],in(N,1),out(N,1);

void dfs(int u,int p){
	for(int i:g[u]) if(i!=p) {
		dfs(i,u);
		in[u]=mm(in[u],in[i]+1);
	}
}

void dfs2(int u,int par){
	vector<int> post,child;
	for(int i:g[u]) if(i!=par) {
		post.pb(i);
		child.pb(i);
	}
	int p=1,j=0;
	post.pb(1);
	for(int i=post.size()-2;i>=0;i--){
		p=mm(p,in[post[i]]+1);
		post[i]=p;
	}
	p=1;
	for(int i:child){
		j++;
		out[i]=(mm(out[u],mm(p,post[j]))+1)%M;
		p=mm(p,in[i]+1);
		dfs2(i,u);
	}
}



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y;
	cin>>n>>M;
	rep(i,0,n-1){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1,0);
	dfs2(1,0);
	rep(i,1,n+1){
		cout<<mm(in[i],out[i])<<endl;
	}
	
}




