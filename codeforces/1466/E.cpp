#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply

void solve() {
	int n,s=0,x=1;
	cin>>n;
	int a[n],b[64]={};
	rep(j,0,n) {
		cin>>a[j];
		rep(i,0,62) if((x<<i)&a[j]) b[i]++;
	}
	rep(i,0,n){
		int sa=0,so=0;
	 	rep(j,0,62) 
			if((x<<j)&a[i])	 sa=(sa+mm(x<<j,b[j]))%M,so=(so+mm(x<<j,n))%M;	
			else			 so=(so+mm(x<<j,b[j]))%M;
		s=(s+mm(sa,so))%M;
	}
	cout<<s<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



