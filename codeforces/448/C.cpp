#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=5001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int dp[N][N],rmq[N][N],a[N];

int solve(int l,int r,int h) {
	if(l>r) return 0;
	int mn=rmq[l][r];
	if(dp[l][r]!=-1) return dp[l][r];
	return dp[l][r]=min(r-l+1,solve(l,mn-1,a[mn])+solve(mn+1,r,a[mn])+a[mn]-h);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	rep(i,0,n) cin>>a[i];
	rep(i,0,n){
		int mn=2e9,mni;
		rep(j,i,n) {
			if(a[j]<=mn) mn=a[j],mni=j;
			rmq[i][j]=mni;	
		} 
	}
	memset(dp,-1,sizeof(dp));
	cout<<solve(0,n-1,0);
	return 0;
}




