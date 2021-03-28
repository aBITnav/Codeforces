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

void dfs(int s,int p,vector<int> g[],vector<int>& dis){
	for(int i:g[s]) if(i!=p){
		dis[i]=dis[s]+1;
		dfs(i,s,g,dis);
	}
}

void solve() {
	int n,a,b,da,db,x,y,mx=0,dab;
	cin>>n>>a>>b>>da>>db;
	vector<int> g[n+1],dis(n+1);
	rep(i,1,n){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(a,0,g,dis);
	dab=dis[b];
	rep(i,1,n+1) {
		if(dis[i]>mx) mx=dis[i],a=i;
		dis[i]=0;
	}
	dfs(a,0,g,dis);
	rep(i,1,n+1) if(dis[i]>mx) mx=dis[i];
	if(da>=dab)	cout<<"Alice\n";
	else if(2*da>=mx) cout<<"Alice\n";
	else if(db<=2*da) cout<<"Alice\n";
	else cout<<"Bob\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




