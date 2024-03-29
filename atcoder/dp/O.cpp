#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int m[21][21],n,dp[21][2100000];

int solve(int i,int mask) {
	if(i==n) return 1;
	if(dp[i][mask]!=-1) return dp[i][mask];
	int ans=0;
	for(int j=0;j<n;j++)
		if(m[i][j] and !(mask&(1<<j))) 
			ans=(ans+solve(i+1,mask|(1<<j)))%M;
	return dp[i][mask]=ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	memset(dp,-1,sizeof(dp));
	cin>>n;
	rep(i,0,n) rep(j,0,n) cin>>m[i][j];
	cout<<solve(0,0);
	
	
	return 0;
}




