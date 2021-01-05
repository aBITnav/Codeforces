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


void solve() {
	int n,m,ans=0;
	cin>>n>>m;
	int k[n],c[m];
	multiset<int> s;
	int p=m-1;
	rep(i,0,n)	cin>>k[i];
	rep(i,0,m) {
		cin>>c[i];
		s.insert(c[i]);
	}
	sort(k,k+n,greater<int>());
	for(int i=0;i<n;i++){
		while(p>=k[i]){
			s.erase(*(s.lower_bound(c[p])));
			p--;
		}
		if(!s.empty()) {
			ans+=(*s.begin());
			s.erase(s.begin());
		}
		else ans+=c[k[i]-1];
	}
	cout<<ans<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



