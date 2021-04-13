#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define mp			make_pair
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int N=320,c;
unordered_map<int,int> m;
int a[100002];

struct query{
	int l,r,x;
	bool operator < (query q){
		return mp(l/N,r) < mp(q.l/N,q.r);
	}
};

void add(int x){
	if(a[x]==m[a[x]]) c--;	
	m[a[x]]++;
	if(a[x]==m[a[x]]) c++;	
}
void remove(int x){
	if(a[x]==m[a[x]]) c--;	
	m[a[x]]--;
	if(a[x]==m[a[x]]) c++;	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,l,r,q;
	cin>>n>>q;
	int ans[q]={};
	vector<query> queries(q);
	rep(i,0,n) cin>>a[i];
	rep(i,0,q){
		cin>>l>>r;
		queries[i]={l-1,r-1,i};
	}
	sort(all(queries));
	l=0,r=-1;
	for(auto q:queries){
		while(l<q.l) remove(l++);
		while(l>q.l) add(--l);
		while(r<q.r) add(++r);
		while(r>q.r) remove(r--);
		ans[q.x]=c;
	}
	for(int i:ans) cout<<i<<endl;
}




