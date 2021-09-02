#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=20001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

string k;
int d,dp[N][2][105][2];

int solve(int i,int c,int s,int took){
	s%=d;
	if(i==k.size()){
		return (s==0 && took);
	}
	if(dp[i][c][s][took]!=-1) return dp[i][c][s][took];
	int ans=0,ub=9;
	if(c) ub=k[i]-'0';
	for(int j=0;j<=ub;j++)
		ans=(ans+solve(i+1,c&(j==ub),s+j,took|(j>0)))%M;
	return dp[i][c][s][took]=ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>k>>d;
	memset(dp,-1,sizeof(dp));
	int ans=solve(0,1,0,0);
	cout<<ans;
	
}