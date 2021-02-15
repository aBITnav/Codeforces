#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=2005001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

void solve() {
	int n,m,w;
	cin>>n;
	vector<int> ans;
	m=(n*(n-1))/2;
	w=(n-1)/2;
	map<int,int> wins;
	rep(i,1,n+1) rep(j,i+1,n+1)
		if(wins[i]<w) wins[i]++,ans.pb(1);
		else if(n%2==0 and wins[i]<=w) wins[i]++,ans.pb(0);
		else ans.pb(-1);
	for(int i:ans) cout<<i<<" ";cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




