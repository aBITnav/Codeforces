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

map<pii,int> dp;

int query(int l,int r){
	if(dp.count({l,r})) return dp[{l,r}]; 
	int x;
	cout<<"? "<<l<<" "<<r<<endl;
		cin>>x;
	return dp[{l,r}]=x;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,xlr,xlm,xmr;
	cin>>n;
	int l=1,r=n,m;
	
	while(1){
		if(r==l) {
			cout<<"! "<<l<<endl;
			return 0;
		}
		if(r-l==1){
			xlr=query(l,r);
			cout<<"! "<<(l+r-xlr)<<endl;
			return 0;	
		}
		m=(l+r)/2;
		xlr=query(l,r);
		if(xlr<=m){
			xlm=query(l,m);
			if(xlm==xlr) r=m;
			else l=m+1;
		}else{
			if(m+1==r){
				r=m;
				continue;
			}
			xmr=query(m+1,r);
			if(xmr==xlr) l=m+1;
			else r=m;
		}
	}
}




