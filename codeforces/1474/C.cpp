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
const int M=1e9+7,N=550001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

bool cal(multiset<int> m,vector<pair<int,int>> &ans){
	int n=m.size()/2;
	while(n--){
		auto x=(--m.end());
		int p=*x;
		m.erase(x);
		auto y=(--m.end());
		int r=*y;
		m.erase(y);
		auto z=m.find(p-r);
		if(z==m.end()) return false;
		int q=*z;
		m.erase(z);
		m.insert(r);
		ans.pb({q,r});
	}
	return true;
}

void solve() {
	int n;
	cin>>n;
	n*=2;
	vector<int> a(n);
	multiset<int> m;
	rep(i,0,n) {
		cin>>a[i];
		m.insert(a[i]);
	}
	sort(all(a));
	rep(i,0,n-1){
		int x=a[i];
		m.erase(m.find(x));
		vector<pair<int,int>> ans;
		ans.pb({x,*(--m.end())});
		if(cal(m,ans)){
			cout<<"YES\n"<<ans[0].fi+ans[0].se<<"\n";
			for(auto p:ans) cout<<p.fi<<" "<<p.se<<"\n";
			return;
		}
		m.insert(x);
	}
	cout<<"NO\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



