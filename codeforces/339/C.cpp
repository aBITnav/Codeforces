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
int n;
string s;
bool ans=1;

void solve(int d,int l,vector<int>& v) {
	if(v.size()==n){
		ans=0;
		cout<<"YES\n";
		for(int i:v) cout<<i<<" ";
		exit(0);
	}
	for(int i=d+1;i<=10;i++) if(i!=l and s[i]=='1'){
		v.pb(i);
		solve(i-d,i,v);
		v.pop_back();
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>s>>n;
	s="#"+s;
	vector<int> v;
	solve(0,0,v);
	if(ans) cout<<"NO\n";
	return 0;
}




