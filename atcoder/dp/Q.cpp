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
	int n,mx=0;
	cin>>n;
	int h[n],a[n];
	rep(i,0,n) cin>>h[i];
	rep(i,0,n) cin>>a[i];
	map<int,int> dp;
	dp[0]=0;
	rep(i,0,n){
		auto x=dp.lower_bound(h[i]);
		auto p=prev(x);
		if(x==dp.end())
			dp.insert({h[i],p->se+a[i]});
		else if((x->fi)!=h[i]){
			dp.insert({h[i],p->se+a[i]});
			while(x!=dp.end() and dp[h[i]]>=x->se){
				auto nxt=next(x);
				dp.erase(x);
				x=nxt;
			}
		}
		else {
			x->se=max(x->se,p->se+a[i]);
			auto nxt=next(x);
			while(nxt!=dp.end() and x->se>=nxt->se){
				auto it=next(nxt);
				dp.erase(nxt);
				x=it;
			}	
		}
		//cout<<h[i]<<"-->"<<dp[h[i]]<<endl;
	}
	for(auto i:dp) mx=max(mx,i.se);
	cout<<mx;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




