#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



/*int solve(int i,int k){
	if(k<0) return -1e9;
	if(i==0) return 1;
	if(a[i]<a[i+1]) return 1+solve(i-1,k);
	else return 2+solve(i-2,k-1);
}*/

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,mx=1;
	cin>>n;
	int a[n+1]={},dp[2][n+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]>a[i-1]) dp[0][i]=dp[0][i-1]+1;	
		else dp[0][i]=1;
		mx=max(mx,dp[0][i]);
		//cout<<dp[0][i]<<" ";
	}
	dp[1][1]=1;
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-2])
		dp[1][i]=1+dp[0][i-2];
		if(a[i]>a[i-1]) dp[1][i]=max(dp[1][i],1+dp[1][i-1]);
		dp[1][i]=max(dp[1][i],1ll);
		mx=max(mx,dp[1][i]);
	}
	cout<<mx;
	return 0;
}


