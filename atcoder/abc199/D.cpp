#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int n,ans=1,ways;
vector<int> g[21],vis(21);

void dfs(int s,vector<int>& v){
	vis[s]=1;
	v.pb(s);
	for(int i:g[s]) if(!vis[i]) dfs(i,v);
}

bool safe(int s,int col,vector<int>& c){
	for(int i:g[s]) if(c[i]==col) return false;
	return true;
}

void cal(int s,vector<int>& c,vector<int>& v){
	if(s==v.size())	{
		ways++;
		return;
	}
	rep(i,1,4)	if(safe(v[s],i,c)){
		c[v[s]]=i;
		cal(s+1,c,v);
		c[v[s]]=0;
	}
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int m,x,y;
	cin>>n>>m;
	while(m--){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	rep(i,1,n+1)	if(!vis[i]){
		vector<int> v,c(21);
		ways=0;
		dfs(i,v);
		cal(0,c,v);
		ans*=ways;		
	}
	cout<<ans;
}