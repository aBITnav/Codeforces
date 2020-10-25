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
int a[6],b[N],n;



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	rep(i,0,6) cin>>a[i];
	cin>>n;
	rep(i,0,n) cin>>b[i];
	vector<pair<int,int>> v;
	rep(i,0,6) rep(j,0,n) v.pb({b[j]-a[i],j});
	sort(all(v));
	int j=0,ans=2e9;
	map<int,int> m;
	rep(i,0,v.size()){
		m[v[i].se]++;
		while(m.size()==n){
			ans=min(ans,v[i].fi-v[j].fi);
			m[v[j].se]--;
			if(m[v[j].se]==0) m.erase(v[j].se);
			j++;
		}
	}
	cout<<ans;
}



