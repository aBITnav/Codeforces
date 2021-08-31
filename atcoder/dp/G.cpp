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

vector<int> g[N],vis(N),dis(N,0),ord;

void dfs(int n){
	vis[n]=1;
	for(int i:g[n])
		if(!vis[i])
			dfs(i);
	ord.pb(n);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,mx=0;
	cin>>n>>m;
	while(m--){
		cin>>x>>y;
		g[x].pb(y);
	}
	for(int i=1;i<=n;i++) if(!vis[i]) dfs(i);
	//reverse(all(ord));
	
	for(int i:ord) {
		//cout<<i<<" ";
		for(int j:g[i]) dis[i]=max(dis[i],dis[j]+1);
		mx=max(mx,dis[i]);
	}
	cout<<mx;
}




