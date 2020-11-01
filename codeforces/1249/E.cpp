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


int a[N],b[N],n,c,dp[N][2];
int solve(int i,int e) {
	if(i<=0) return 0;
	if(dp[i][e]!=-1) return dp[i][e];
	return dp[i][e]=min(solve(i-1,0)+b[i]+e*c,solve(i-1,1)+a[i]);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>c;
	memset(dp,-1,sizeof(dp));
	rep(i,1,n) cin>>a[i];
	rep(i,1,n) cin>>b[i];
	rep(i,0,n) cout<<solve(i,1)<<" ";
	return 0;
}



