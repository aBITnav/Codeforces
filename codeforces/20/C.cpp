#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define se second
#define pi pair<int,int>

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,w;
	cin>>n>>m;
	vector<pi > g[n+1];
	while(m--){
		cin>>x>>y>>w;
		g[x].pb({y,w});
		g[y].pb({x,w});
	}
	vector<int> d(n+1,1e18),p(n+1);
	d[1]=0;
	set<pi > s;
	s.insert({0,1});
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
	if(d[n]==1e18) cout<<"-1 ";
	else {
		vector<int> ans;
		x=n;
		ans.pb(n);
		while(x!=1){
			x=p[x];
			ans.pb(x);
		}
		reverse(all(ans));
		for(int i:ans) cout<<i<<" ";	
	}
	
}


