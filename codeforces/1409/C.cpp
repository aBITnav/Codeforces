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



void solve() {
	int x,y,n,d,ans,i;
	cin>>n>>x>>y;
	for(d=1;d<=100;d++){
		if((y-x)%d==0){
			int r=(y-x)/d+1;
			if(r<=n) break;
		}
	}
	vector<int> v;
	for(i=x;i<=y;i+=d) v.pb(i);
	i=x-d;
	while(v.size()<n and i>0) {
		v.pb(i);
		i-=d;
	}
	i=y+d;
	while(v.size()<n) {
		v.pb(i);
		i+=d;
	}
	for(int i:v) cout<<i<<" ";
	cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



