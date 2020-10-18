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
	int n;
	cin>>n;
	string g[n];
	rep(i,0,n) cin>>g[i];
	vector<pair<int,int>> v;
	if(g[0][1]==g[1][0]){
		if(g[0][1]=='1'){
			if(g[n-1][n-2]=='1') v.pb({n-1,n-2});
			if(g[n-2][n-1]=='1') v.pb({n-2,n-1});
		}else{
			if(g[n-1][n-2]=='0') v.pb({n-1,n-2});
			if(g[n-2][n-1]=='0') v.pb({n-2,n-1});
		}
	}
	else if(g[n-1][n-2]==g[n-2][n-1]){
		if(g[n-1][n-2]=='1'){
			if(g[0][1]=='1') v.pb({0,1});
			if(g[1][0]=='1') v.pb({1,0});
		}else{
			if(g[0][1]=='0') v.pb({0,1});
			if(g[1][0]=='0') v.pb({1,0});
		}
	}else{
		if(g[0][1]=='0') v.pb({0,1});
		if(g[1][0]=='0') v.pb({1,0});
		if(g[n-1][n-2]=='1') v.pb({n-1,n-2});
		if(g[n-2][n-1]=='1') v.pb({n-2,n-1});
	}
	cout<<v.size()<<"\n";
	for(auto i:v) cout<<i.fi+1<<" "<<i.se+1<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



