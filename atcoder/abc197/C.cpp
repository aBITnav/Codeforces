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

int n,mn=1e18;
int a[30];

vector<vector<int>> v;

void solve(int i,int cor,vector<int> cur) {
	if(i==n){
		if(cor) cur.pb(cor);
		v.pb(cur);
		return;
	}
	solve(i+1,cor|a[i],cur);
	if(cor){
	cur.pb(cor);
	solve(i+1,a[i],cur);
	cur.pop_back();
}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	rep(i,0,n) cin>>a[i];
	vector<int> cur;
	solve(0,0,cur);
	for(auto i:v){
		int x=0;
		for(auto j:i) x=x^j;
		mn=min(mn,x);
	}
	cout<<mn;
	return 0;
}




