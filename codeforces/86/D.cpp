#include<bits/stdc++.h>
using namespace std;
#define int	 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define mp			make_pair
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int N=450;
int a[200002],m[1000001],ans[200002],c=0;

struct query{
	int l,r,x;
	bool operator < (query q) const {
		return mp(l/N,r) < mp(q.l/N,q.r);
	}
};

void upd(int x,int d){
	c-=m[a[x]]*m[a[x]]*a[x];	
	m[a[x]]+=d;
	c+=m[a[x]]*m[a[x]]*a[x];
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,l,r,q;
	cin>>n>>q;
	vector<query> queries(q);
	rep(i,0,n) cin>>a[i];
	rep(i,0,q){
		cin>>l>>r;
		queries[i]={l-1,r-1,i};
	}
	sort(all(queries));
	l=0,r=-1;
	for(auto& q:queries){
		while(l<q.l) upd(l++,-1);
		while(l>q.l) upd(--l,1);
		while(r<q.r) upd(++r,1);
		while(r>q.r) upd(r--,-1);
		ans[q.x]=c;
	}
	for(int i=0;i<q;i++) cout<<ans[i]<<"\n";
}




