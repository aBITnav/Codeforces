#include<bits/stdc++.h>
using namespace std;
//#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


void solve(int l,int r,int d,int a[],int b[]) {
	if(l>r) return;
	int mx=0,mxi;
	rep(i,l,r+1) if(a[i]>mx) mx=a[i],mxi=i;
	b[mxi]=d;
	solve(l,mxi-1,d+1,a,b);
	solve(mxi+1,r,d+1,a,b);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n],b[n]={};
		rep(i,0,n) cin>>a[i];
		solve(0,n-1,0,a,b);
		for(int i:b) cout<<i<<" ";
		cout<<"\n";
	}
	return 0;
}




