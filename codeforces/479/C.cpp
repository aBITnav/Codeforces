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
	int n,x,i,y,c=0;
	vector<pair<int,int> > v;
	cin>>n;
	rep(i,n){
		cin>>x>>y;
		v.pb({x,y});
	}
	sort(all(v));
	for(auto i:v)
		if(c<i.se) c=i.se; 
		else if(c>i.se) c=i.fi;
	cout<<c;
	return 0;
}


