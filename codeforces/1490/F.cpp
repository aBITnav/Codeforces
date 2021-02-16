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



void solve() {
	int n,x,mx=0;
	map<int,int> mp;
	cin>>n;
	rep(i,0,n) {
		cin>>x;
		mp[x]++;
		mx=max(mx,mp[x]);
	}
	n=mx+3;
	int f[n]={},s[n]={},ss[n]={},ps=0,ans=1e9;
	for(auto i:mp)
		f[i.se]++;
	rep(i,n-2,-1){
		s[i]=s[i+1]+f[i];
		ss[i]=ss[i+1]+s[i];
	}
	rep(i,1,n-1){
		ans=min(ans,ps+ss[i+1]);
		ps+=i*f[i];
	}
	cout<<ans<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




