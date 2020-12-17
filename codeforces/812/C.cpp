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




signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,s,x;
	cin>>n>>s;
	int a[n];
	rep(i,0,n)	cin>>a[i];
	int l=0,r=n,k,cur=0;
	vector<int> v;
	while(l<=r){
		k=(l+r)/2;
		cur=0;
		v.resize(0);
		rep(i,0,n) v.pb(a[i]+(i+1)*k);
		sort(all(v));
		rep(i,0,k) cur+=v[i];
		if(cur>s) r=k-1;
		else l=k+1;
	}
	cur=0;
	v.resize(0);
	rep(i,0,n) v.pb(a[i]+(i+1)*r);
	sort(all(v));
	rep(i,0,r) cur+=v[i];
	cout<<r<<" "<<cur;
}



