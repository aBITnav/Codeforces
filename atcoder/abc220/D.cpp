#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define endl		"\n"
const int M=998244353,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int a[N];
int dp[N][10];

int solve(int i,int s) {
	if(i==0) return a[0]==s;
	if(dp[i][s]!=-1) return dp[i][s];
	int ans=0;
	for(int p=0;p<10;p++){
		if(((p+a[i])%10)==s)
			ans=(ans+solve(i-1,p))%M;
		}
	for(int p=0;p<10;p++){
		if(((p*a[i])%10)==s)
			ans=(ans+solve(i-1,p))%M;
	}
	return dp[i][s]=ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	memset(dp,-1,sizeof(dp));
	cin>>n;
	rep(i,0,n) cin>>a[i];
	rep(i,0,10) cout<<solve(n-1,i)<<endl;
}





