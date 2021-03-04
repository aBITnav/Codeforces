#include<bits/stdc++.h>
using namespace std;
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=2050;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

void solve() {
	int n,x,mx=0,p=0;
	cin>>n;
	vector<int> v;
	rep(i,0,2*n){
		cin>>x;
		mx=max(mx,x);
		if(x==mx){
			v.pb(i-p);
			p=i; 
		}
	}
	v.pb(2*n-p);
	bool dp[v.size()][n+1];
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	rep(i,1,v.size()) rep(j,0,n+1){
		dp[i][j]=dp[i-1][j];
		if(j>=v[i]) dp[i][j]|=dp[i-1][j-v[i]];
	}
	if(dp[v.size()-1][n]) cout<<"YES\n";
	else cout<<"NO\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




