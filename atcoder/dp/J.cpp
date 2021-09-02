#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=301;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int n,a[N];
double dp[N][N][N];


double solve(int z,int o,int t,int th) {
	if(z==n) return 0;
	double ans=1;
	if(dp[o][t][th]) return dp[o][t][th];
	//if(z>0) ans+=z;
	if(o>0)  ans+=(o*solve(z+1,o-1,t,th))/n;
	if(t>0)  ans+=(t*solve(z,o+1,t-1,th))/n;
	if(th>0) ans+=(th*solve(z,o,t+1,th-1))/n;
	return dp[o][t][th]=(ans*n)/(n-z);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	int z=0,o=0,t=0,th=0,x;
	//0memset(dp,-1,sizeof(dp));
	rep(i,0,n){
		cin>>x;
		if(x==0) z++;
		else if(x==1) o++;
		else if(x==2) t++;
		else th++;
	}
	printf("%0.10lf",solve(z,o,t,th));
}