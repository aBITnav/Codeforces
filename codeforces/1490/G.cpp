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
	int n,k,q;
	cin>>n>>q;
	int ps[n];
	rep(i,0,n){
		cin>>ps[i];
		if(i) ps[i]+=ps[i-1];
	}
	int s=ps[n-1];
	rep(i,1,n) ps[i]=max(ps[i],ps[i-1]);
	int mx=ps[n-1];
	while(q--){
		cin>>k;
		if(s<=0){
			if(mx<k) cout<<"-1 ";
			else cout<<(lower_bound(ps,ps+n,k)-ps)<<" ";
		}else{
			int d=max(0ll,(k-mx+s-1)/s);
			int i=lower_bound(ps,ps+n,k-d*s)-ps;
			int ans=n*d+i;
			cout<<ans<<" ";
		}
	}
	cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




