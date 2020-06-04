#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,sum=0;
	cin>>n;
	vector<char> s(n);
	for(int j=0;j<n;j++) cin>>s[j];
	int dp[n][n];
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	for(int i=1;i<n;i++){
		if(s[i-1]=='f')
			for(int j=1;j<n;j++)
				dp[i][j]=dp[i-1][j-1];
		else{
			int s=0;
			for(int j=n-1;j>=0;j--){
				s=(s%M+dp[i-1][j]%M)%M;
				dp[i][j]=s;
			}
			//dp[i][j]=(dp[i][j]%M+dp[i-1][j]%M)%M;
		}
	}
	for(int j=0;j<n;j++)
		sum=(sum%M+dp[n-1][j]%M)%M;
	cout<<sum%M;
}