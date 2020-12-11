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

double calc(vector<double>& v,int i){
	if(v.size()==i) return 0;
	//if(i==v.size()-1) return v[i];
	return v[i]+(1-v[i])*calc(v,i+1); 
}

void solve() {
	int m,n;
	cin>>n>>m;
	int a[n],b[n];
	rep(i,0,n){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int l=n-1;
	while(l>=0 and a[l]==b[l])	l--;
	vector<double> v;
	//v.pb(0);
	double x,ans;
	
	while(m--){
		int i;
		cin>>i>>x;
		if(i>l) v.pb(x);
	}
	if(l<0) {
		printf("1.000000000\n");
		return;
	}
	printf("%0.9lf\n",calc(v,0));
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



