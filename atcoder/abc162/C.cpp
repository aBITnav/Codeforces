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
	int t=1;
	//cin>>t;
	while(t--){
		//vector<int> v;map<int,int> mp;set<int> st;
		int ans=0;
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) 
		for(int j=1;j<=n;j++)
		for(int k=1;k<=n;k++) ans+=(__gcd(i,__gcd(j,k)));
		//int a[n];rep(i,n) cin>>a[i];
		cout<<ans;
	}
	return 0;
}


