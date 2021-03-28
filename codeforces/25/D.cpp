#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=1051;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> par(N),sz(N,1);

int fnd(int n){
	if(n==par[n]) return n;
	return par[n]=fnd(par[n]);
}
void un(int a,int b){
	a=fnd(a);
	b=fnd(b);
	if(a==b) return;
	if(sz[b]>sz[a]) swap(a,b);
	par[b]=a;
	sz[a]+=sz[b];
}

void solve() {
	int n,x,y;
	stack<pii> del;
	cin>>n;
	rep(i,1,n+1) par[i]=i;
	rep(i,1,n){
		cin>>x>>y;
		if(fnd(x)==fnd(y)) del.push({x,y});
		else un(x,y);
	}
	cout<<del.size()<<"\n";
	for(int i=2;i<=n;i++){
		if(fnd(1)!=fnd(i)){
			cout<<del.top().fi<<" "<<del.top().se<<" 1 "<<i<<"\n";
			del.pop();
			un(1,i);
		}
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




