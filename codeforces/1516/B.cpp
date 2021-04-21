#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define endl		"\n"
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



void solve() {
	int n;
	cin>>n;
	int a[n],p[n];
	rep(i,0,n) {
		cin>>a[i];
		if(!i) p[i]=a[i];
		else p[i]=p[i-1]^a[i];
	}
	rep(l,0,n-1) {
		if(p[l]==(p[n-1]^p[l])){
			cout<<"YES"<<endl;
			return;
		}
	}
	rep(l,1,n-1)
		rep(r,l+1,n)
			if(p[l-1]==(p[r-1]^p[l-1]) and p[l-1]==(p[n-1]^p[r-1])){
				cout<<"YES"<<endl;
				return;
			}
	
	cout<<"NO"<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}