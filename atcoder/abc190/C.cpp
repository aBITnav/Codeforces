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
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<pair<int,int>> c;
vector<pair<int,int>> p;
int n,m,k;

int cal(vector<int>& f){
	int ans=0;
	for(auto i:c) if(f[i.fi] and f[i.se]) ans++;
	return ans;
}


int solve(int i,vector<int>& f) {
	if(i>=k) return 0;
	int t=cal(f);
	f[p[i].fi]++;
	int ans1=cal(f)-t+solve(i+1,f);
	f[p[i].se]++;
	f[p[i].fi]--;
	int ans2=cal(f)-t+solve(i+1,f);
	f[p[i].se]--;
	return max(ans1,ans2);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int x,y;
	rep(i,0,m) {
		cin>>x>>y;
		c.pb({x,y});
	}
	cin>>k;
	rep(i,0,k){
		cin>>x>>y;
		p.pb({x,y});
	}
	vector<int> f(n+1,0);
	cout<<solve(0,f);
	return 0;
}



