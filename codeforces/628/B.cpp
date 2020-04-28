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
	string s;
	int ans=0;
	cin>>s;
	s="0"+s;
	for(int i=1;i<s.size();i++){
		if((s[i]-'0')%4==0) ans++;
		if((10*(s[i-1]-'0')+s[i]-'0')%4==0) ans+=(i-1);
	}
	cout<<ans;
	return 0;
}
 