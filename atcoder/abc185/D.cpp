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



void solve() {
	int n,k,ans=0,mn=1e18;
	cin>>n>>k;
	vector<int> v,a(k);
	rep(i,0,k) cin>>a[i];
	a.pb(0);a.pb(n+1);
	sort(all(a));
	for(int i=1;i<a.size();i++) {
		int d=a[i]-a[i-1]-1;
		if(d) v.pb(d);
		if(d) mn=min(mn,d);
	}
	if(v.size()==0){
		cout<<0;
		return;
	}
	for(int i:v) ans+=(i+mn-1)/mn;
	cout<<ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



