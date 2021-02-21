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
const int M=1e9+7,N=205001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,t=0,s=0,pos=0,neg=0;
	cin>>n;
	int a[n];
	rep(i,0,n){
		cin>>x;
		if(x>=0) pos++;
		if(x<=0) neg++;
		if(!t) t=x;
		a[i]=abs(x);
		s+=a[i];
	}
	if(n==1) {
		cout<<t;
		return 0;
	}
	if(pos==n or neg==n){
		sort(a,a+n);
		s=s-2*a[0];
	}
	cout<<s;
}