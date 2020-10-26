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

int a=0,n;

void dfs(int s,int p,vector<int> g[],vector<int> &c){
	for(int i:g[s]) if(i!=p){
		dfs(i,s,g,c);
		c[s]+=c[i];
	}
	if(2*c[s]==n) a=s;
}

void solve() {
	int x,y;
	a=0;
	cin>>n;
	vector<int> g[n+1],c(n+1,1);
	rep(i,1,n){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1,0,g,c);
	if(!a) {
		cout<<x<<" "<<y<<"\n";
		cout<<x<<" "<<y<<"\n";
	}
	else {
		int p,s;
		for(int i:g[a])  if(c[i]>c[a]) p=i;
		for(int i:g[p])  if(i!=a) s=i;
		cout<<s<<" "<<p<<"\n";
		cout<<a<<" "<<s<<"\n";	
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) 	solve();
	return 0;
}



