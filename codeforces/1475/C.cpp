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



void solve() {
	int m,n,k,x,ans=0;
	cin>>m>>n>>k;
	int b[m+1]={},g[n+1]={};
	vector<pair<int,int>> d(k);
	rep(i,0,k){
		cin>>x;
		d[i].fi=x;
		b[x]++;
	}
	rep(i,0,k){
		cin>>x;
		d[i].se=x;
		g[x]++;
	}
	for(auto i:d){
		ans+=k-b[i.fi]-g[i.se]+1;
	}
	ans/=2;
	cout<<ans<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



