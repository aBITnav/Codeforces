#include<bits/stdc++.h>
using namespace std;
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define endl		"\n"

unordered_map<string,bool> dp;
int n;
int a[102];

bool solve(int i,int s) {
	if(s<0) return false;
	if(i==n)	return s==0;
	string key=to_string(i)+" "+to_string(s);
	if(dp.count(key)) return dp[key];
	return dp[key]=(solve(i+1,s) or solve(i+1,s-a[i]));
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int s=0;
	cin>>n;
	rep(i,0,n) 	cin>>a[i];
	int g=a[0];
	rep(i,1,n) g=__gcd(g,a[i]);
	rep(i,0,n) {
		a[i]/=g;
		s+=a[i];
	}
	if(s%2 or !solve(0,s/2)) {
		cout<<0;
		return 0;	
	}
	rep(i,0,n){
		if(a[i]%2){
			cout<<1<<endl<<i+1;
			return 0;
		}
	}
	cout<<0;
}