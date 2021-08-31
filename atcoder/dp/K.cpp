#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=200005;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int dp[N][2];
vector<int> v;

bool solve(int n,int i){
	if(n<0){
		if(i) return 0;
		return 1;
	}
	if(dp[n][i]!=-1) return dp[n][i];
	bool res;
	if(i){
		res=true;
		for(int j:v) res=res and solve(n-j,0);
	} else {
		res=false;
		for(int j:v) res=res or solve(n-j,1);
	}
	return dp[n][i]=res;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k,x,n;
	memset(dp,-1,sizeof(dp));
	cin>>k>>n;
	rep(i,0,k){
		cin>>x;
		v.pb(x);
	}
	bool res=solve(n,0);
	if(res) cout<<"First";
	else cout<<"Second";
	
	
}




