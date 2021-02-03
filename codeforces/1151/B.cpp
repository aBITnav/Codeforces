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
	int x=0,e,f,m,n,d,dir=0,dic;
	cin>>m>>n;
	vector<int> ans(m,1);
	rep(i,0,m) {
		cin>>f;
		x^=f;
		rep(j,1,n){
			cin>>e;
			if(e!=f)	dir=i+1,dic=j+1;
		}
	}
	if(!x and !dir){
		cout<<"NIE";return;
	}
	else if(!x)	ans[dir-1]=dic;
	cout<<"TAK\n";
	for(int i:ans) cout<<i<<" ";
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



