#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=105;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int a[N],dp[N][N][N][2];

int solve(int i,int o,int e,int p) {
	if(o<0 or e<0) return 1e9;
	if(i<0) return 0;
	if(dp[i][o][e][p]!=-1) return dp[i][o][e][p];
	int ans=1e9;
	if(a[i])
		ans=(a[i]%2!=p)+solve(i-1,o,e,a[i]%2);
	else 
		ans=min(solve(i-1,o-1,e,1)+!p,solve(i-1,o,e-1,0)+p);
	return dp[i][o][e][p]=ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,o=0,e=0;
	set<int> s;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	rep(i,0,n) {
		cin>>a[i];
		s.insert(a[i]);
	}
	rep(i,1,n+1) if(!s.count(i)){
		if(i%2) o++;
		else e++;
	}
	cout<<min(solve(n-1,o,e,0),solve(n-1,o,e,1));
	
}



