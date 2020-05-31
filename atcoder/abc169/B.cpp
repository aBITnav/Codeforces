#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,ans=1,x,f=1;
	cin>>n;
	long double l=1;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(a[i]==0) f=0;
	}
	if(f==0){
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++){
		x=a[i];
		l*=x;
		if(l>1e18){
			f=-1;
			break;
		}
		ans*=x;
		f=ans;
	}
	
	cout<<f;
	return 0;
}


