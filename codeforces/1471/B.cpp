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

int po(int n,int k){
	int p=1;
	while(n%k==0){
		n/=k;
		p++;
	}
	return p;
}

void solve() {
	int n,mn=1e9,mni,k,p,s=0;
	cin>>n>>k;
	int a[n];
	rep(i,0,n){
		cin>>a[i];
		p=po(a[i],k);
		if(p<mn) mn=p,mni=i;
	}
	rep(i,0,mni) s+=a[i]*(mn+1);
	rep(i,mni,n) s+=a[i]*(mn);
	cout<<s<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



