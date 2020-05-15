#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pi pair<int,int>

int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,mx,y;
	cin>>n;
	string ans,x;
	vector<pair<string,int> >v(n);
	mx=0;
	map<string,int> mp,mp1;
	set<string> s;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v[i]={x,y};
		mp[x]+=y;
	}
	for(auto i:mp)
		mx=max(mx,i.se);
	for(auto i:mp)
		if(i.se==mx) s.insert(i.fi);
		
	for(int i=0;i<n;i++){
		x=v[i].fi; 
		y=v[i].se;
		mp1[x]+=y;
		if(mp1[x]>=mx and s.find(x)!=s.end()){
			cout<<x;
			return 0;
		}
	}		
	
	return 0;
}


