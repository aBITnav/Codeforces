#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


void solve() {
	int ans=0,c,h,w,k,i,j;
	cin>>h>>w>>k;
	char g[6][6];
	rep(i,0,h)
		rep(j,0,w)
			cin>>g[i][j];
		
	for(int bit=0;bit<(1<<(h+w));bit++){
		c=0;
		rep(i,0,h) rep(j,0,w)
			//if(g[i][j]=='#' and ((bit>>i) & 1) and ((bit>>(h+j)) &(1))) c++;
		if(g[i][j]=='#' and bit&(1<<i) and bit&(1<<(h+j))) c++;
		if(c==k) ans++; 
	}
	cout<<ans;
}
	



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



