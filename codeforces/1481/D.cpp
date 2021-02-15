#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

void solve() {
	int n,k;
	cin>>n>>k;
	char g[n+1][n+1];
	rep(i,1,n+1) rep(j,1,n+1) cin>>g[i][j];
	rep(i,1,n+1) rep(j,1,n+1) if(g[i][j]==g[j][i] and i!=j){
		cout<<"YES\n";
		rep(c,0,k+1) 
			if(c%2) cout<<j<<" ";
			else cout<<i<<" ";
		cout<<"\n";
		return;
	}
	if(k%2){
		cout<<"YES\n";
		rep(i,0,k+1) 
			if(i%2) cout<<"1 ";
			else cout<<"2 ";
		cout<<"\n";
		return;
	}
	vector<int> v={1,2,3};
	if(n==2) {
		cout<<"NO\n";
		return;
	}
	do{
		int p=v[0],q=v[1],r=v[2];
		if(g[p][q]==g[q][r]){
			cout<<"YES\n";
			if(k%4==2){
				rep(i,0,k/2)
					if(i%2) cout<<q<<" ";
					else cout<<p<<" ";
				cout<<q<<" ";
				rep(i,0,k/2)
					if(i%2) cout<<q<<" ";
					else cout<<r<<" ";
				cout<<"\n";
			}
			else{
				rep(i,0,k/2)
					if(i%2) cout<<p<<" ";
					else cout<<q<<" ";
				cout<<q<<" ";
				rep(i,0,k/2)
					if(i%2) cout<<q<<" ";
					else cout<<r<<" ";
				cout<<"\n";
			}
			return;
		}
	}while(next_permutation(all(v)));
	cout<<"NO\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




