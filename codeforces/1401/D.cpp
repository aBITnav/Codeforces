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

void dfs(int s,int p,vector<int> g[],vector<int>& c){
	for(int i:g[s]) if(i!=p) {
		dfs(i,s,g,c);
		c[s]+=c[i];
	}
}

void solve() {
	int n,k,x,y,ans=0;
	cin>>n;
	vector<int> g[n],c(n,1),p,v;
	vector<pii> edges;
	rep(i,1,n){
		cin>>x>>y;
		x--;y--;
		edges.pb({x,y});
		g[x].pb(y);
		g[y].pb(x);
	}
	cin>>k;
	rep(i,0,k){
		cin>>x;
		p.pb(x);
	}
	sort(all(p));
	if(p.size()>n-1){
		int pro=1;
		while(p.size()>n-2){
			pro=mm(pro,p.back());
			p.pop_back();
		}
		p.pb(pro);
	}
	reverse(all(p));
	dfs(0,-1,g,c);
	while(p.size()<n-1) p.pb(1);
	for(pii i:edges){
		x=min(c[i.fi],c[i.se]);
		x=x*(n-x);
		v.pb(x);
	}
	sort(all(v),greater<int>());
	rep(i,0,n-1){
		ans=(ans+mm(p[i],v[i]))%M;
	}
	cout<<ans<<"\n";
	//for(int i:c) cout<<i<<" ";cout<<"\n\n";
	

}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




