#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=998244353,N=305001;
int F[N]={1},iF[N]={1};

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int ncr(int n,int r){
	if(r>n) return 0;
	return mm(F[n],mm(iF[r],iF[n-r]));
}

void solve() {
	rep(i,1,N) {
		F[i]=mm(F[i-1],i);
		iF[i]=po(F[i],M-2);
	}
	int n,k,x,y,ans=0;
	vector<pii> v;
	cin>>n>>k;
	rep(i,0,n){
		cin>>x>>y;
		v.pb({x,y});
	}
	sort(all(v));
	multiset<int> s;
	for(auto i:v){
		s.insert(i.se);
		while(!s.empty() and *s.begin()<i.fi) s.erase(s.begin());
		ans=(ans+mm(1,ncr(s.size()-1,k-1)))%M;
		
	}
	cout<<ans;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




