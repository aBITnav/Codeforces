#include<bits/stdc++.h>
using namespace std;
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
	int n,t=1,i,j,x,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(!a and !b) for(int i=0;i<=c;i++) cout<<"1";
		else if(!b and !c) for(int i=0;i<=a;i++) cout<<"0";
		else{
			for(int i=0;i<c;i++) cout<<"1";
			for(int i=0;i<(b+1)/2;i++) cout<<"10";
			for(int i=0;i<a;i++) cout<<"0";
			if(b%2==0) cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}

