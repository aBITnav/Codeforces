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
	string s;
	cin>>s;
	int r1=0,r2=0,sum=0,ans,n=s.size();
	rep(i,0,n){
		int d=s[i]-'0';
		sum+=d;
		if(d%3==1) r1++;
		else if(d%3==2) r2++;
	}
	if(sum%3==0) ans=0;
	else if(sum%3==1){
		if(r1>0) ans=1;
		else if(r2>1) ans=2;
		else ans=-1;
		
	}
	else{
		if(r2>0) ans=1;
		else if(r1>1) ans=2;
		else ans=-1;
	}
	if(n<=ans) ans=-1;
	cout<<ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



