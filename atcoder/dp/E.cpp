#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=100011;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int wt[101],val[100],n,w,dp[101][N];

int solve(int i,int v) {
	if(v<0) return 1e18;
	if(dp[i][v]!=-1) return dp[i][v];
	if(i==n){
		if(v==0) return 0;
		return 1e18;
	}
	return dp[i][v]=min(solve(i+1,v),wt[i]+solve(i+1,v-val[i]));
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>w;
	rep(i,0,n) cin>>wt[i]>>val[i];
	memset(dp,-1,sizeof(dp));
	for(int i=N-2;i>0;i--) {
		if(solve(0,i)<=w){
			cout<<i;
			break;
		}
	}
}




