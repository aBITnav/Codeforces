#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=100005;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

string s,h="hard";
int dp[N][4],a[N],n;

int solve(int i,int k) {
	if(k==4) return 1e17;
	if(i==n) return 0;
	if(dp[i][k]!=-1) return dp[i][k];
	if(s[i]==h[k]) 
		dp[i][k]=min(solve(i+1,k+1),a[i]+solve(i+1,k));
	else dp[i][k]=solve(i+1,k);
	return dp[i][k];
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>s;
	memset(dp,-1,sizeof(dp));
	rep(i,0,n) cin>>a[i];
	cout<<solve(0,0);
}