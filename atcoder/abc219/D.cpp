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

int n,dp[310][310][310],a[310],b[310];

int solve(int i,int x,int y) {
	if(x<=0 and y<=0) return 0;
	x=max(x,0ll);
	y=max(y,0ll);
	if(i==n)	return 1e9;
	if(dp[i][x][y]!=-1) return dp[i][x][y];
	int ans=solve(i+1,x,y);
	ans=min(ans,1+solve(i+1,x-a[i],y-b[i]));
	return dp[i][x][y]=ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	memset(dp,-1,sizeof(dp));
	cin>>n;
	int x,y;
	cin>>x>>y;
	rep(i,0,n) cin>>a[i]>>b[i];
	int ans=solve(0,x,y);
	if(ans>1e7) ans=-1;
	cout<<ans;
}




