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
int M=1e9+7,N=2005;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int h[N][N]={},v[N][N]={},d[N][N]={},dp[N][N]={};
	d[0][0]=1;
	char ch;//g[N][N];
	int l,w;
	cin>>l>>w;
	//rep(i,1,l+1) rep(j,1,w+1) cin>>g[i][j];
		
	rep(i,1,l+1) rep(j,1,w+1){
		cin>>ch;
		if(ch=='#') continue;
		if(i==1 and j==1){
			d[i][j]=dp[i][j]=h[i][j]=v[i][j]=1;
			continue;
		}
		dp[i][j]=(h[i-1][j]+v[i][j-1]+d[i-1][j-1])%M;
		h[i][j]=(dp[i][j]+h[i-1][j])%M;
		v[i][j]=(dp[i][j]+v[i][j-1])%M;
		d[i][j]=(dp[i][j]+d[i-1][j-1])%M;
	}
	//rep(i,1,l+1) {rep(j,1,w+1) cout<<dp[i][j]<<" "; cout<<"\n";}
	cout<<dp[l][w];
}



