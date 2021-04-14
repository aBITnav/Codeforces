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

int p[505],a[505],dp[505][505];

int solve(int l,int r) {
	if(l>r) return 0;
	if(l==r) return 1;
	if(dp[l][r]!=-1) return dp[l][r];
	int ans=1+solve(l+1,r);
	for(int k=l+2;k<=r;k++) if(a[k]==a[l])
		ans=min(ans,solve(l+1,k-1)+solve(k+1,r));
	if(a[l]==a[l+1])	ans=min(ans,1+solve(l+2,r));
	return dp[l][r]=ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	rep(i,0,n) cin>>a[i];
	cout<<solve(0,n-1);
}




