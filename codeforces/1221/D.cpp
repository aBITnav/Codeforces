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
const int M=1e9+7,N=305001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
 
int a[N],b[N],n,dp[N][3];
 
int solve(int i,int p) {
	if(i>n)	return 0;
	if(dp[i][p]!=-1) return dp[i][p];
	int ans=1e18+100;
	if(a[i-1]+p!=a[i]+ 0 ) ans=min(ans,solve(i+1, 0 ));
	if(a[i-1]+p!=a[i]+ 1 ) ans=min(ans,b[i]+solve(i+1, 1 ));
	if(a[i-1]+p!=a[i]+ 2 ) ans=min(ans,2*b[i]+solve(i+1, 2 ));
	return dp[i][p]=ans;
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) {
		cin>>n;
		rep(i,1,n+1) {
			cin>>a[i]>>b[i];
			dp[i][0]=dp[i][1]=dp[i][2]=-1;
		}
		cout<<solve(1,0)<<"\n";	
	}
	return 0;
}