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
const int M=1e9+7,N=3005001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int spf[N]={1,1};

int cal(int n){
	int x=1;
	map<int,int> f;
	while(n>1){
		f[spf[n]]++;
		n/=spf[n];
	}
	for(auto i:f)
		if(i.se%2) x*=i.fi;
	return x;
}

void solve() {
	int n,x,mx=0,mxo=0,mxe=0,q;
	cin>>n;
	map<int,int> f;
	rep(i,0,n){
		cin>>x;
		x=cal(x);
		f[x]++;
		mx=max(mx,f[x]);
	}
	for(auto i:f){
		if(i.fi==1 or i.se%2==0) mxe+=i.se;
		else mxo=max(mxo,i.se);
	}
	mxe=max(mxo,mxe);
	cin>>q;
	while(q--){
		cin>>x;
		if(!x) cout<<mx<<"\n";
		else cout<<mxe<<"\n";
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	for(int i=2;i<N;i++) if(!spf[i]){
		spf[i]=i;
		for(int j=i*i;j<N;j+=i) if(!spf[j]) spf[j]=i;
	}
	cin>>t;
	while(t--) solve();
	return 0;
}



