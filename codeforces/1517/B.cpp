#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define endl		"\n"
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



void solve() {
	int m,n;
	cin>>m>>n;
	vector<pii> v;
	int g[m][n],ans[m][n];
	memset(ans,0,sizeof(ans));
	rep(i,0,m) rep(j,0,n) {
		cin>>g[i][j];
		v.pb({g[i][j],i});	
	}
	sort(all(v));
	rep(j,0,n)
		ans[v[j].se][j]=v[j].fi;
		
	rep(i,0,m){
		unordered_multiset<int> s;
		rep(j,0,n) s.insert(g[i][j]);
		rep(j,0,n) if(ans[i][j]) {
			auto f=s.find(ans[i][j]);
			s.erase(f);
		}
		rep(j,0,n) {
			if(!ans[i][j]) {
				ans[i][j]=(*s.begin());
				s.erase(s.begin());
			}
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




