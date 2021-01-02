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
#define pii pair<int,int>
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
 
bool comp(pii a,pii b){
	//if(a.fi+a.se==b.fi+b.se) return a.fi-a.se>b.fi-b.se;
	return 2*a.fi+a.se>2*b.fi+b.se;
}
 
void solve() {
	int n,va=0,vb=0;
	cin>>n;
	pii a[n];
	rep(i,0,n) {
		cin>>a[i].fi>>a[i].se;
		va+=a[i].fi;
	}
	sort(a,a+n,comp);
	rep(i,0,n){
		vb+=a[i].fi+a[i].se;
		va-=a[i].fi;
		if(vb>va) {
			cout<<i+1;
			break;
		}
	}
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}