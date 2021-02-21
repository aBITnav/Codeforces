#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> g[N];
bool chk=false;
int st;

void dfs(int s,int p,int h){
	int cnt=0;
	for(int i:g[s]) {
		if(i!=p) dfs(i,s,h+1);
		if(g[i].size()==1) cnt++;  
	}
	if(cnt) st++;
	if(g[s].size()==1 and h%2) chk=true;
}
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y,l,lc=0;
	cin>>n;
	rep(i,1,n){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	rep(i,1,n+1) if(g[i].size()==1){
		l=i;
		lc++;
	}
	dfs(l,0,0);
	x=(chk?3:1);
	y=n-1-lc+st;
	cout<<x<<" "<<y;
}