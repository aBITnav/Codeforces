#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int p(int x){
	return x*x*x*x;
}
int lcm(int a,int b){
	return (a*b)/__gcd(a,b); 
}

void solve() {
	int n,m,x;
	cin>>m>>n;
	int L=1;
	rep(i,1,17) L=lcm(L,i);
	rep(i,0,m) {
		rep(j,0,n){
			cin>>x;
			if((i+j)%2) x=L+p(x);
			else x=L;
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




