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

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,K;
	cin>>n>>m>>K;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int dp[K+1][n+1];
	memset(dp,0,sizeof(dp));
	for(int k=1;k<=K;k++){
		for(int i=m*k;i<=n;i++){
			int s=0;
			for(int j=i;j>i-m;j--) s+=a[j];
			dp[k][i]=max(dp[k][i-1],dp[k-1][i-m]+s);
		}
	}
	cout<<dp[K][n];
}


