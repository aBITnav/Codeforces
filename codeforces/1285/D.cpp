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

int solve(vector<int>& v,int b) {
	if(b<0 or v.empty()) return 0;
	vector<int> l,r;
	for(int i:v) if(i&(1<<b)) l.pb(i);else r.pb(i);
	if(l.empty()) return solve(r,b-1);
	if(r.empty()) return solve(l,b-1);
	return min(solve(r,b-1),solve(l,b-1))+(1<<b);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	vector<int> v(n);
	rep(i,0,n) cin>>v[i];
	cout<<solve(v,30);
}




