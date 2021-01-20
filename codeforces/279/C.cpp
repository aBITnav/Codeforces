#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int a[205001],le[205001],ri[205001];

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q,l,r;
	cin>>n>>q;
	rep(i,1,n+1) cin>>a[i];
	rep(i,1,n+1) le[i]=(a[i]<=a[i-1])?le[i-1]:i;
	rep(i,n,-1)  ri[i]=(a[i]<=a[i+1])?ri[i+1]:i;
	
	while(q--){
		cin>>l>>r;
		if(ri[l]>=le[r]) cout<<"Yes\n";
		else cout<<"No\n";
	}
}



