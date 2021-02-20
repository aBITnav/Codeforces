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
#define pii pair<int,int>
int M=1e9+7,N=205001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

struct edge{
	int fi,t,k;
};

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,med,src,dest,x,y,t,k;
	priority_queue<pii, vector<pii>, greater<pii>> q;
	cin>>n>>med>>src>>dest;
	vector<edge> g[n+2];
	rep(i,0,med){
		cin>>x>>y>>t>>k;
		g[x].pb({y,t,k});
		g[y].pb({x,t,k});
	}
	q.push({0ll,src});
	vector<int> d(n+2,1e18);
	d[src]=0;
	while(!q.empty()){
		int from=q.top().se;
		int wei=q.top().fi;
		q.pop();
		if(d[from]<wei) continue;
		for(auto i:g[from]){
			int to=i.fi;
			int w=i.t;
			int k=i.k;
			int sw=(k+k-d[from]%k)%k;
			w+=sw;
			if(d[to]>d[from]+w){
				d[to]=d[from]+w;
				q.push({d[to],to});
			}
		}
	}
	int ans=d[dest];
	if(ans==1e18) ans=-1;
	cout<<ans<<" "; 
}