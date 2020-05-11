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
	int n;
	cin>>n;
	string s,a="";
	cin>>s;
	for(char i:s){
		if(i=='0' or i=='1') continue;
		if(i=='4') a+="322";
		else if(i=='6') a+="53";
		else if(i=='8') a+="7222";
		else if(i=='9') a+="7332";
		else a+=i;
	}
	sort(all(a));
	reverse(all(a));
	cout<<a;
	return 0;
}


