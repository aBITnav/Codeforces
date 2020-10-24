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

int n,k;
int dp[N][3];
vector<int> a,ps;

int solve(int i,int r){
	if(r>2) return -1e9;
	if(i<0) return 0;
	if(dp[i][r]!=-1) return dp[i][r];
	int p=upper_bound(all(a),a[i]-k-1)-a.begin();
	return dp[i][r]=max(solve(i-1,r),ps[i+1]-ps[p]+solve(p-1,r+1));
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1,x,y;
	cin>>t;
	while(t--) {
		a.clear();
		ps.clear();
		cin>>n>>k;
		map<int,int> m;
		rep(i,0,n){
			cin>>x;
			m[x]++;
			dp[i][0]=dp[i][1]=dp[i][2]=-1;
		}
		rep(i,0,n)
			cin>>x;
		int p=0;
		ps.pb(p);
		for(auto i:m){
			p+=i.se;
			a.pb(i.fi);
			ps.pb(p);
		}
		//rep(i,0,a.size()) cout<<a[i]<<" "<<ps[i]<<"\n";
		cout<<solve(m.size()-1,0)<<"\n";
	}
	return 0;
}



