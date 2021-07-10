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
 

void solve() {
	int n,q,x;
	cin>>n>>q;
	int a[n+2],l[n+2],r[n+2],t[q];
	rep(i,0,n+2) a[i]=l[i]=r[i]=1e18;
	rep(i,0,q){
		cin>>t[i];
	}
	rep(i,0,q){
		cin>>x;
		a[t[i]]=x;
	}
	for(int i=1;i<=n;i++) l[i]=min(l[i-1]+1,a[i]);
	for(int i=n;i>0;i--) r[i]=min(r[i+1]+1,l[i]);
	for(int i=1;i<=n;i++) cout<<r[i]<<" ";
	cout<<endl;
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}