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
int M=998244353,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int inv(int x){	return po(x,M-2);}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int f[N]={1};
	rep(i,1,N) f[i]=mm(f[i-1],i);
	int m,n;
	cin>>n>>m;
	if(n==2){
		cout<<0;
		return 0;
	}
	int ans=mm(n-2,po(2,n-3));
	int ncr=mm(f[m],mm(inv(f[n-1]),inv(f[m-n+1])));
	ans=mm(ans,ncr);
	cout<<ans;
	
}



