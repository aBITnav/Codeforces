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
 
bool pri(int n){
	if(n==1) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
} 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	if(pri(n)){
		cout<<"1\n"<<n;
		return 0;
	}
	if(pri(n-2)){
		cout<<"2\n2 "<<n-2;
		return 0;
	}
	int d=1,x=2;
	while(!pri(n-d)) d++;
	while(!(pri(x) and pri(d-x))) x++;
	cout<<"3\n"<<n-d<<" "<<x<<" "<<d-x<<"\n"; 
}