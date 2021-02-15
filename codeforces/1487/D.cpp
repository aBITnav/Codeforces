#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=2005001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> v;

void solve() {
	int n,ans;
	cin>>n;
	ans=upper_bound(all(v),n)-v.begin()-1;
	cout<<ans<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int a=1;a<N;a+=2){
		int b=(a*a)/2;
		int c2=a*a+b*b;
		int c=sqrt(c2);
		if(c*c==c2) v.pb(c);
	}
	
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




