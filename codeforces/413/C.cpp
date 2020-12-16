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



void solve() {
	int n,m,x,s=0;
	cin>>n>>m;
	int a[n];
	rep(i,0,n) cin>>a[i];
	rep(i,0,m) {
		cin>>x;
		x--;
		a[x]*=-1;
	}
	sort(a,a+n);
	for(int i=m;i<n;i++) s+=a[i];
	cout<<max(s*(1ll<<m),(s-a[0])*(1ll<<(m-1)))<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int t=1;
	//cin>>t;	
	while(t--) solve();
	return 0;
}



