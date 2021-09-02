#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=100101;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int n,a[401],dp[401][401];


int solve(int l,int r) {
	if(l>=r) return 0;
	if(dp[l][r]!=-1) return dp[l][r];
	int s=0,mn=1e18;
	for(int i=l;i<=r;i++) s+=a[i];
	for(int i=l+1;i<=r;i++)
	mn=min(mn,solve(l,i-1)+solve(i,r));
	return dp[l][r]=mn+s;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	memset(dp,-1,sizeof(dp));
	rep(i,0,n) cin>>a[i];
	cout<<solve(0,n-1);
}