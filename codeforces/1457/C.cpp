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



void solve() { 
	int n,p,k,x,y,mn=1e9;
	string s;
	cin>>n>>p>>k>>s>>x>>y;
	p--;
	int prev[k]={};
	/*memset(ss,0,sizeof(ss));
	for(int i=n-1;i>=0;i--) 
		ss[i/k][i%k]=ss[i/k+1][i%k]+(s[i]=='0')*x;*/
	for(int i=n-1;i>=p;i--){
		prev[i%k]+=x*(s[i]=='0');
		int sum=(i-p)*y+prev[i%k];
		
		mn=min(mn,sum);
	}
	cout<<mn<<"\n";
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



