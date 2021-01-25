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
const int N=205001;
int M=1e9+7;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
 
int f[N]={1};
 
int mi(int n){
	return po(n,M-2);
}
 
int ncr(int n,int r){
	if (n < r)     return 0;
    if (r == 0)     return 1;	
	return mm(f[n],mi(f[r])*mi(f[n-r]));	
}
 
void solve() {
	int n,ans=0,k,m;
	cin>>n>>k;
	int a[n];
	map<int,int> f;
	rep(i,0,n){
		cin>>a[i];
		f[a[i]]++;
	}
		
	sort(a,a+n);
	reverse(a,a+n);
	int x=a[k-1];
	int i=0;
	while(a[i]!=x) i++;
	n=f[x];
	int r=k-i;
	cout<<ncr(n,r)<<"\n";
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t=1;
	rep(i,1,N) f[i]=mm(f[i-1],i);
	cin>>t;	while(t--) solve();
	return 0;
}
 