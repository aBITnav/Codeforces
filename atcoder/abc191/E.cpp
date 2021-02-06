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
const int M=1e9+7,N=2050;
#define pi pair<int,int>

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<pair<int,int>> g[N],r[N];

vector<int> dj(int st){
	int x,y,w;
	vector<int> d(N+1,1e18),p(N+1);
	d[st]=0;
	set<pi > s;
	s.insert({0,st});
	while(!s.empty()){
		x=(s.begin())->second;
		s.erase(s.begin());
		for(auto i:g[x]){
			y=i.fi;w=i.se;
			if(d[x]+w<d[y]){
				s.erase({d[y],y});
				p[y]=x;
				d[y]=d[x]+w;
				s.insert({d[y],y});
			}
		}
	}
	return d;
	}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,w;
	cin>>n>>m;
	while(m--){
		cin>>x>>y>>w;
		g[x].pb({y,w});
		r[y].pb({x,w});
	}
	rep(i,1,n+1){
		vector<int> d=dj(i);
		int mn=1e18;
		for(auto j:r[i]){
			mn=min(mn,d[j.fi]+j.se);
		}
		if(mn>1e9) mn=-1;
		cout<<mn<<"\n";
	}
}



