#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=200010;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int s[N][10];


void solve() {
	int n,m,ans=0;
	cin>>n>>m;
	while(n){
		int t=n%10;
		n/=10;
		rep(i,0,10) ans=(ans+s[m+t][i])%M;
	}
	cout<<ans<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	s[0][0]=1;
	rep(i,1,N){
		rep(j,1,10) s[i][j]=s[i-1][j-1];
		s[i][0]=s[i-1][9];
		s[i][1]=(s[i][1]+s[i-1][9])%M;
	}
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




