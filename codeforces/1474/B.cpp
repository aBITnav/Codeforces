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
const int M=1e9+7,N=550001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> prime,com(N);


void solve() {
	int d;
	cin>>d;
	int a=*lower_bound(all(prime),1+d);
	int b=*lower_bound(all(prime),a+d);
	cout<<a*b<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=2;i<N;i++) if(!com[i]){
		for(int j=i*i;j<N;j+=i) com[j]=1;
		prime.pb(i);
	}
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



