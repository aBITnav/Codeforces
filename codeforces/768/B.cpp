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
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int l,r;

int siz(int n) {
	if(n<2) return 1;
	int s=siz(n/2);
	return 2*s+1;
}
int solve(int n,int i){
	if(!n) return 1;
	int s=siz(n/2);
	if(i==s+1) return n%2;
	else if(i<s+1) return solve(n/2,i);
	return solve(n/2,i-s-1); 
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,ans=0;
	cin>>n>>l>>r;
	if(n==0) {
		cout<<0;
		return 0;
	}
	rep(i,l,r+1) ans+=solve(n,i);
	cout<<ans<<"\n";
}



