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



void solve() {
	string s;
	cin>>s;
	s="#"+s;
	int n=s.size();
	int dp[n][3];
	memset(dp,0,sizeof(dp));
	int ans=0;
	for(int i=1;i<n;i++){
		if(s[i]=='?' or s[i]=='1')
			dp[i][1]=dp[i-1][0]+1;
		if(s[i]=='?' or s[i]=='0')
			dp[i][0]=dp[i-1][1]+1;
		if(s[i]=='?') dp[i][2]=dp[i-1][2]-1; 
		ans+=dp[i][0]+dp[i][1]+dp[i][2];
	}
	cout<<ans<<"\n";

}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




