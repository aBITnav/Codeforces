#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q,k,l,r;
	cin>>n>>q>>k;
	int a[n+2]={},ps[n+2]={};
	a[n+1]=k+1;
	rep(i,1,n+1) cin>>a[i];
	rep(i,1,n+1) ps[i]=ps[i-1]+a[i+1]-a[i-1]-2;
	while(q--){
		cin>>l>>r;
		int ans=ps[r-1]-ps[l]+a[l+1]-2+k-a[r-1]-1;
		cout<<ans<<"\n";
		
	}
}




