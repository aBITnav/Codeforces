#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,l,q,r,lcm,t,d,k,c=0;
	cin>>t;
	while(t--){
		cin>>a>>b>>q;
		d=(a*b)/__gcd(a,b);
		k=max(a,b);
		c=d-k;
		while(q--){
			cin>>l>>r;
			int L=l/d;
			int R=r/d;
			int ans=(R-L-1)*c+max(0ll,r+1-R*d-k)+min(c,(L+1)*d-l);
			//c=(R-L)*k+min(r-R*d+1,k)+max((L-1)*d+k-l,0ll);
			cout<<ans<<endl;
		}
	}
	return 0;
}

