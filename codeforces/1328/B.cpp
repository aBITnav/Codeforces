#include <bits/stdc++.h>
using namespace std;
#define int long long
int l=2*1e5;
signed main() {
	int t=1,m,d;
	cin>>t;
	int dp[l]={};
	for(int i=1;i<l;i++) dp[i]=(i*(i+1))/2+1;
	while(t--){
		cin>>m>>d;
		int n=upper_bound(dp,dp+l,d)-dp;
		string s(m,'a');
		s[n]=s[d-(n*(n-1))/2-1]='b';
		reverse(s.begin(),s.end());
		cout<<s<<endl;	
	}
	return 0;
}