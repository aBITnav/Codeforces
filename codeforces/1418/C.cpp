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
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int a[N],n;
int dp[N][2][4];

int solve(int i,int pre,int c) {
	if(i>=n) return 0;
	if(dp[i][pre][c]!=-1) return dp[i][pre][c];
	int ans=1e9;
	if(c<2) ans=min({ans,solve(i+1,pre,c+1)+a[i]*(!pre),solve(i+1,!pre,0)+a[i]*(!pre)});
	return dp[i][pre][c]=ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		cin>>n;
		rep(i,0,n+1) rep(j,0,2) rep(k,0,4) dp[i][j][k]=-1;
		rep(i,0,n) cin>>a[i];
		cout<<solve(0,0,0)<<"\n";
	}
	return 0;
}



