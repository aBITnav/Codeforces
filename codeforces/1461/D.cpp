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

int sum(vector<int> &a,map<int,bool>& mp,int l,int r){
	//if(l>r or l<0 or r<0 or l>=a.size() or r>=a.size()) return 0;
	if(a[l]==a[r]) {
		int s=a[l]*(r-l+1);
		mp[s]=1;
		return s;
	}
	//rep(i,l,r+1) cout<<a[i]<<" ";cout<<"\n\n";
	int m=l,mean=(a[l]+a[r])/2,lc=0,rc=0;
	while( m<=r and a[m]<=mean) m++;
	lc=sum(a,mp,l,m-1);
	rc=sum(a,mp,m,r);
	mp[lc+rc]=1;
	return lc+rc;
}

void solve() {
	int n,q,x;
	cin>>n>>q;
	vector<int> a(n);
	rep(i,0,n) cin>>a[i];
	sort(all(a));
	map<int,bool> mp;
	sum(a,mp,0,n-1);
	while(q--){
		cin>>x;
		if(mp[x]) cout<<"Yes\n";
		else cout<<"No\n";
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



