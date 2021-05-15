#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x){
	return x*x*x*x;
}
int ncr(int n,int r){
	if(n==r or r==0) return 1;
	if(n==2) return 2;
	if(n==3) return 3;
	if(r==2) return 6;
	return 4;
}


void solve() {
	int q=0,n=0,sig=1,ans=0;
	string s;
	cin>>s;
	rep(i,0,s.size()) if(s[i]=='o') n++;else if(s[i]=='?') q++;
	if(n>4){
 		cout<<0;
 		return;
	}
	for(int r=0;r<=n;r++) ans+=sig*ncr(n,r)*po(n+q-r),sig*=-1;
	cout<<ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




