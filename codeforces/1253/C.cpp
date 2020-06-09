#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pii pair<int, int>
#define vi  vector<int>
#define vp  vector<pii>

int M=1e9+7;
vi g[205001],par(205001),vis(205001),dis(205001);

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
void graph(int n, int m){int i, u, v;while(m--){
		cin>>u>>v;g[u].pb(v);g[v].pb(u); } }



void solve() {
	int i, j, n, m,c=0,s=0,ans,mx=0,mn=1e9,k;
	cin>>n>>k;
	int a[n],dp[n]={};
	rep(i,0,n)
		cin>>a[i];
	
	sort(a,a+n);
	dp[0]=a[0];
	if(n==1){
		cout<<a[0];return;
	}
	
	for(int i=1;i<k;i++) {
		dp[i]=dp[i-1]+a[i];	
	}
	s=dp[k-1];
	
	for(int i=k;i<n;i++){
		//cout<<s<<endl;
		s+=a[i];
		dp[i]=s+dp[i-k];
	}
	rep(i,0,n) cout<<dp[i]<<" ";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}


