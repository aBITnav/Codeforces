#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int m,n,d,x;
	cin>>n>>d>>m;
	vector<int> s,g;
	rep(i,0,n) {
		cin>>x;
		if(x<=m) s.pb(x);
		else g.pb(x);
	}
	sort(all(g),greater<int>());
	sort(all(s));
	n=s.size(),m=g.size();
	int ss[n+1]={};
	rep(i,0,n) ss[i+1]=ss[i]+s[i]; 
	int ans=ss[n],gs=0;
	for(int i=0;i<m;i++){
		gs+=g[i];
		int del=max(0ll,d*i-m+i+1);
		if(del>n) break;
		ans=max(ans,gs+ss[n]-ss[del]);
	}
	cout<<ans;
}




