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
	int x,p,q;
	cin>>x;
	int a[2002];
	for(int i=0;i<=2001;i++) a[i]=pow(i-1000,5);
	for(int i=0;i<=2001;i++){
		for(int j=0;j<=2001;j++){
			if(a[i]-a[j]==x) p=i-1000,q=j-1000; 
		}
	}
	cout<<p<<" "<<q;
	return 0;
}


