#include <bits/stdc++.h>
using namespace std;
#define int long long
char pi[3001][3001];
int dp[3001][3001];
string s1,s2;

signed main() {
	cin>>s1>>s2;
	int n1=s1.size(),n2=s2.size();
	for(int i=0;i<=n1;i++)
		for(int j=0;j<=n2;j++){
			if(i==0 or j==0) 
				dp[i][j]=0;
			else if(s1[i-1]==s2[j-1]) {
				dp[i][j]=dp[i-1][j-1]+1;
				pi[i][j]='d';
			}
			else if(dp[i][j-1]>=dp[i-1][j]){
				dp[i][j]=dp[i][j-1];
				pi[i][j]='l';
				}
			else{
				dp[i][j]=dp[i-1][j];
				pi[i][j]='u';
				}
			}
	int i=n1,j=n2;stack<char> st;
	while(i>0 and j>0){
		if(pi[i][j]=='d'){
			st.push(s1[i-1]);
			i--;j--;
		}
		else if(pi[i][j]=='l') j--;
		else if(pi[i][j]=='u') i--;
		
	}
	int l=st.size();
	for(int i=0;i<l;i++) {
		cout<<st.top();
		st.pop();
	}
	return 0;
}