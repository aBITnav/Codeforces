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
	int n,s,m,mn=1e9,s1=0,x;
	cin>>n>>s;
	vector<int> o,t,a(n);
	rep(i,0,n)	cin>>a[i];
	rep(i,0,n){
		cin>>x;
		if(x==1) o.pb(a[i]);
		else t.pb(a[i]);
	}
	sort(all(t),greater<int>());
	sort(all(o),greater<int>());
	o.insert(o.begin(),0);
	t.insert(t.begin(),0);
	vector<int> p(t.size());
	for(int i=1;i<t.size();i++) p[i]=p[i-1]+t[i];
	
	for(int i=0;i<o.size();i++){
		s1+=o[i];
		auto j=lower_bound(all(p),s-s1);
		if(j!=p.end()) mn=min(mn,2*(j-p.begin())+i);
	}
	if(mn==1e9) mn=-1;
	cout<<mn<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



