#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int v[200001];

void solve() {
	int a,b,d,n;
	cin>>a>>b;
	d=abs(a-b);
	n=lower_bound(v,v+200000,d)-v;
	while(1){
		if((v[n]-d)%2==0){
			cout<<n<<endl;
			break;
		}
		n++;	
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	for(int i=0;i<200001;i++) v[i]=(i*(i+1))/2;
	while(t--) solve();
	return 0;
}


