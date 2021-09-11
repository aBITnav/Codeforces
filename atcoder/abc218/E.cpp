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

vector<int> p(N),sz(N,1);

int par(int n){
	if(p[n]==n) return n;
	return p[n]=par(p[n]);
}
void un(int x,int y){
	x=par(x);
	y=par(y);
	if(x==y) return;
	if(sz[y]>sz[x]) swap(x,y);
	p[y]=x;
	sz[x]+=sz[y];
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,w,ans=0;
	cin>>n>>m;
	rep(i,1,n+1) p[i]=i;
	vector<int> ed;
	vector<pair<int,pair<int,int>>> e;
	while(m--){
		cin>>x>>y>>w;
		e.pb({w,{x,y}});
	}
	sort(all(e));
	for(auto i:e){
		if(par(i.se.fi)!=par(i.se.se)){
			un(i.se.fi,i.se.se);
		} else ed.pb(i.fi);
	}
	for(int i:ed) if(i>0) ans+=i;
	cout<<ans;
	return 0;
}




