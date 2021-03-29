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

int dp[1005][1005];
int n;
int solve(int i,int k) {
	if(k==1) return 1;
	if(i<=0) return 1;
	if(dp[i][k]!=-1) return dp[i][k];
	dp[i][k]=(solve(i-1,k)+solve(n-i,k-1))%M;
	return dp[i][k];
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1,k;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		rep(i,0,n+2) rep(j,0,k+2) dp[i][j]=-1;
		cout<<solve(n,k)<<"\n";	
	}
	return 0;
}




