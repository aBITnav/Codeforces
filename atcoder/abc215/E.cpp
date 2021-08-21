#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=998244353,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


string s;
int dp[1000][1024][11];
int solve(int i,int mask,int c){
	if(i==s.size()) return 1;
	if(dp[i][mask][c]!=-1) return dp[i][mask][c];
	int ans=solve(i+1,mask,c);
	if(mask&(1<<(s[i]-'A'))){
		if(c==s[i]-'A'+1)
			ans=(ans+solve(i+1,mask,c))%M;
	} else{
		ans=(ans+solve(i+1,mask|(1<<(s[i]-'A')),s[i]-'A'+1))%M;
	}
	return dp[i][mask][c]=ans%M;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	memset(dp,-1,sizeof(dp));
	cin>>n>>s;
	cout<<solve(0,0,0)-1;
}




