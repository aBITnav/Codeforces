#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
 
string s[100]; 
int dp[100][2];

int solve(int n,int c) {
	if(n==0){
		return 1;
	}
	if(dp[n][c]!=-1) return dp[n][c];
    if(s[n]=="OR") {
    	if(c) return dp[n][c]=(1ll<<n)+solve(n-1,1);
		else return dp[n][c]=solve(n-1,0);	
    }
    else{
    	if(c) return dp[n][c]=solve(n-1,1);
		else return dp[n][c]=solve(n-1,0)+solve(n-1,1);	
	}
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	rep(i,1,n+1) cin>>s[i];
	cout<<solve(n,1); 
}