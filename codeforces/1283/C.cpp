#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pii pair<int, int>
#define vi  vector<int>
#define vp  vector<pii>

int M=1e9+7;
vi g[205001],par(205001),vis(205001),dis(205001);

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
void graph(int n, int m){int i, u, v;while(m--){
		cin>>u>>v;g[u].pb(v);g[v].pb(u); } }



void solve() {
	int i, j, n, m,c=0,sum=0,ans,mx=0,mn=1e9;
	cin>>n;
	set<int> s;
	int a[n+1];
	vi v,ind;
	rep(i,1,n+1){
		cin>>a[i];
		if(a[i]!=0) s.insert(a[i]);
		else ind.pb(i);	
	} 
	
	rep(i,1,n+1) if(s.find(i)==s.end()) v.pb(i);
	
	
	sort(v.rbegin(),v.rend());
	if(v[0]==ind[0]) swap(v[0],v[1]); 
	for(int i=0;i<v.size();i++) if(v[i]==ind[i]) swap(v[i],v[0]);
	for(int i=0;i<v.size();i++) a[ind[i]]=v[i];
	rep(i,1,n+1) cout<<a[i]<<" ";
	cout<<endl;
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}


