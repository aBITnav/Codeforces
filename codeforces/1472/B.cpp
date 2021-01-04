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

int p(int n){
	int c=0;
	while(n%2==0) n/=2,c++;
	return c;
}

void solve() {
	int n,x,o=0,t=0,s=0;
	cin>>n;
	rep(i,0,n){
		cin>>x;
		s+=x;
		if(x==1) o++;
		else t++;
	}
	if(s%2 or (t%2 and !o)) cout<<"No\n";
	else cout<<"Yes\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



