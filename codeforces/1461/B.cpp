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
	int m,n;
	cin>>m>>n;
	char g[m+2][n+2];
	memset(g,'.',sizeof(g));
	rep(i,1,m+1) rep(j,1,n+1) cin>>g[i][j];
	int dpl[m+2][n+2], dpr[m+2][n+2];
	memset(dpl,0,sizeof(dpl));
	memset(dpr,0,sizeof(dpr));
	rep(i,0,m+1) rep(j,0,n+1){
		if(g[i][j]=='.') continue;
		dpl[i][j]=min(dpl[i][j-1],dpl[i-1][j])+1;
	}
	rep(i,0,m+1) for(int j=n+1;j>=0;j--){
		if(g[i][j]=='.') continue;
		dpr[i][j]=min(dpr[i][j+1],dpr[i-1][j])+1;
	}
	int ans=0;
	rep(i,0,m+1) rep(j,0,n+1) ans+=min(dpl[i][j],dpr[i][j]);
	cout<<ans<<"\n";
	
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



