#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define vii 		vector<vector<int>>
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int n;

vii mul(vii a, vii b){
	vii res(n,vector<int> (n));
	rep(i,0,n) rep(j,0,n) rep(k,0,n){
		res[i][j]=(res[i][j]+mm(a[i][k],b[k][j]))%M;
	}
	return res;	
}

vii me(vii& x,int k) {
	if(k==1) return x;
	vii a=me(x,k/2);
	if(k%2) return mul(a,mul(a,x));
	return mul(a,a);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k;
	cin>>n>>k;
	vii a(n,vector<int> (n));
	rep(i,0,n) rep(j,0,n) cin>>a[i][j];
	vii res=me(a,k);
	int ans=0;
	for(auto i:res) for(int j:i) ans=(ans+j)%M;
	cout<<ans;
}




