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

map<int,int> cc(vector<int> v){
	set<int> s(all(v));
	map<int,int> mp;
	int c=1;
	for(int i:s){
		mp[i]=c++;
	}
	return mp;
}

void solve() {
	int m,n,t,x,y;
	cin>>m>>n>>t;
	vector<int> h,v;
	vector<pair<int,int>> inp;
	while(t--){
		cin>>x>>y;
		inp.pb({x,y});
		h.pb(x);
		v.pb(y);
	}
	map<int,int> hc=cc(h);
	map<int,int> vc=cc(v);
	for(auto i:inp){
		cout<<hc[i.fi]<<" "<<vc[i.se]<<endl;
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




