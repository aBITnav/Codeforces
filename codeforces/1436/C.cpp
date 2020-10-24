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

vector<int> bs(int a[],int n,int x){
	int l=0,r=n;
	vector<int> v;
	while(l<r){
		int mid=(l+r)/2;
		v.pb(mid);
		if(a[mid]<=x) l=mid+1;
		else r=mid;
	}
	return v;
}

void solve() {
	int n,x,p;
	cin>>n>>x>>p;
	int a[n];
	rep(i,0,n) a[i]=i;
	vector<int> v=bs(a,n,p);
	int n1=0,n2=0,n3=n-v.size();
	for(int i:v) {
		if(i>p) n1++;
		else if(i<p) n2++;
	}
	int ans=1;
	rep(i,0,n1) ans=mm(ans,n-x-i);
	rep(i,0,n2) ans=mm(ans,x-i-1);
	rep(i,1,n3+1) ans=mm(ans,i);
	cout<<ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



