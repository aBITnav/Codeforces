#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=3005;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int dp[N][N][2],vis[N][N][2],a[N];


int solve(int l,int r,bool c){
	if(l>r) return 0;
	if(vis[l][r][c]) return dp[l][r][c];
	vis[l][r][c]=1;
	return dp[l][r][c]=max(a[l]-solve(l+1,r,!c),a[r]-solve(l,r-1,!c));
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	memset(vis,0,sizeof(vis));
	rep(i,0,n){
		cin>>a[i];
	}
	cout<<solve(0,n-1,0);
}




