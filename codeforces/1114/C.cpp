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

int zero(int n,int f){
	int s=0,p=f;
	while(n>=p){
		s+=n/p;
		if(n/f<p) break;
		p*=f;
	}
	return s;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,b,mn=1e18;
	cin>>n>>b;
	int t=b;
	for(int i=2;i*i<=b;i++){
		if(t%i==0){
			int c=0;
			while(t%i==0) t/=i,c++;
			mn=min(mn,zero(n,i)/c);
		}
	}
	if(t>1) mn=min(mn,zero(n,t));
	cout<<mn;
}



