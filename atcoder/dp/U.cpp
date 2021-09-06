#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=66000;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int A[16][16];
int dp[N],cost[N];
int n;

int solve(int mask){
	if(!mask) return 0;
	if(dp[mask]!=-1e18) return dp[mask];
	int ans=-1e18;
	for(int sm=mask;sm;sm=mask&(sm-1))
		ans=max(ans,cost[sm]+solve(sm^mask));	
	return dp[mask]=ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=0;i<N;i++) dp[i]=-1e18;
	cin>>n;
	rep(i,0,n) rep(j,0,n) cin>>A[i][j];
	for(int i=1;i<(1<<n);i++)
		rep(j,0,n) rep(k,j+1,n){
			if(i&(1<<j) and i&(1<<k)) cost[i]+=A[j][k];
	}
	cout<<solve((1<<n)-1);
	return 0;
}




