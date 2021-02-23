#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int ThreeblockPalin(vector<bool>& v){
	if(v.size()==0) return 0;
	int zl=0,zr=0,l=0,r=v.size()-1,mx=0,c=0;
	for(bool i:v) c+=(i==0);
	while(l<=r){
		while(l<=r and v[l]==0) c--,l++;
		while(l<=r and v[r]==0) c--,r--;
		if(v[l]==1) zl++;
		if(v[r]==1 and l!=r) zr++;
		mx=max(mx,zl+zr+c);
		l++;r--;
	}
	return mx;
}

void solve() {
	int n,mx=0,c=0;
	cin>>n;
	vector<int> a(n),b(n),ind(201,-1);
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	sort(all(b));
	rep(i,0,n) if(ind[b[i]]==-1) ind[b[i]]=c++;
	rep(i,0,n) a[i]=ind[a[i]];
	int N=c;
	vector<bool> arr[N*N];
	for(int& x:a) rep(y,0,N)  
		if(x!=y) {
			arr[N*x+y].pb(0);
			arr[N*y+x].pb(1);
		}else
			arr[N*x+y].pb(1);
	rep(i,0,N*N)
		mx=max(mx,ThreeblockPalin(arr[i]));
	cout<<mx<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}