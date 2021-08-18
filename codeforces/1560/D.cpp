#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=20501;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<string> s;

int cal(string &t,string &p){
	int m=t.size(),n=p.size(),c=0;
	for(int i=0,j=0;i<n;i++){
		while(j<m and t[j]!=p[i]) j++;
		if(j>=m) break;
		c++,j++;
	}
	return m+n-2*c;
}
void solve() {
	int mn=1e9;
	string t,ans;
	cin>>t;
	for(string p:s) {
		auto temp=mn;
		mn=min(mn,cal(t,p));
		if(mn==cal(t,p)) ans=p;
	}
	cout<<mn<<"\n";
	return;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	int p=1;
	for(int i=0;i<63;i++){
		s.pb(to_string(p));
		p*=2;
	}
	while(t--) solve();
	return 0;
}




