#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int N=1000006;

struct node{
	int op,cl,bal;
	node operator+(node a){
		int m=min(op,a.cl);
		return {op+a.op-m,cl+a.cl-m,bal+a.bal+2*m};
	}
};

node tree[4*N];
string s;

void build(int n,int tl,int tr){
	if(tl==tr) {
		tree[n]={s[tl]=='(',s[tl]==')',0};
		return;
	}
	int tm=(tl+tr)/2;
	build(2*n,tl,tm);
	build(2*n+1,tm+1,tr);
	tree[n]=tree[2*n]+tree[2*n+1];
}

node query(int n,int tl,int tr,int l,int r){
	if(l>r) return {0,0,0};
	if(tl==l and tr==r) return tree[n];
	int tm=(tl+tr)/2;
	node al=query(2*n,tl,tm,l,min(r,tm));
	node ar=query(2*n+1,tm+1,tr,max(l,tm+1),r);
	return al+ar;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>s;
	int l,r,q,n=s.size();
	s="#"+s;
	build(1,1,n);
	cin>>q;
	while(q--){
		cin>>l>>r;
		node ans=query(1,1,n,l,r);
		cout<<ans.bal<<"\n";
	}
}




