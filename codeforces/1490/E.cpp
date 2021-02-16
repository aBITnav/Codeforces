#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



void solve() {
	int n,x;
	vector<pii> v;
	cin>>n;
	rep(i,0,n) {
		cin>>x;
		v.pb({x,i+1});
	}
	vector<int> ans;
	sort(all(v));
	int ps[n]={},lw=0;
	ps[0]=v[0].fi;
	rep(i,1,n) ps[i]=ps[i-1]+v[i].fi;
	rep(i,n-1,-1){
		if(ps[i]>=lw) {
			ans.pb(v[i].se);
			lw=v[i].fi;
		}
	}
	sort(all(ans));
	cout<<ans.size()<<"\n";
	for(int i:ans) cout<<i<<" ";
	cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




