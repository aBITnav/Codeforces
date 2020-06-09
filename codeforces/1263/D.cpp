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

void dfs(int p){
	vis[p]=1;
	for(int i:g[p]) if(!vis[i]) dfs(i);
}

void solve() {
	int n;
	set<int> st;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		st.insert(s[0]);
		for(int i=1;i<s.size();i++){
			g[s[i]-'a'].pb(s[i-1]-'a');
			g[s[i-1]-'a'].pb(s[i]-'a');
		}
	}
	int c=0;
	for(int i:st){
		if(!vis[i-'a']){
			c++;
			dfs(i-'a');	
		}
	}
	cout<<c;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}


