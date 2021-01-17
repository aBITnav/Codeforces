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
	int n,q,x=0,y,d=0;
	string s;
	cin>>n>>q>>s;
	n++;
	int a[n+1]={},b[n+1]={},mxl[n+1]={},mxr[n+1]={},mnl[n+1]={},mnr[n+1]={};
	
	rep(i,1,n) {
		a[i]=a[i-1]+(s[i-1]=='+'?1:-1);
		mxl[i]=max(mxl[i-1],a[i]);
		mnl[i]=min(mnl[i-1],a[i]);
	}
		
	rep(i,n-1,0) {
		b[i]=b[i+1]+(s[i-1]=='+'?1:-1);
		mxr[i]=max(mxr[i+1],b[i]);
		mnr[i]=min(mnr[i+1],b[i]);
	}
	
	while(q--){
		cin>>x>>y;
		x--;y++;
		int l1=mnl[x],r1=mxl[x];
		int l2=-mxr[y]+a[x]+b[y],r2=-mnr[y]+a[x]+b[y];
		d=max(r1,r2)-min(l1,l2)+1;
		cout<<d<<"\n";
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



