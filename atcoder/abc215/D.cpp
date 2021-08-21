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
	int n,m,x;
	cin>>n>>m;
	set<int> pf;
	vector<int> prime(m+1,1);
	for(int i=0;i<n;i++){
		cin>>x;
		int t=x;
		for(int j=2;j*j<=t;j++) if(x%j==0){
			while(x%j==0) x/=j;
			pf.insert(j);
		}
		pf.insert(x);
	}
	pf.erase(1);
	for(int i:pf){
		for(int j=i;j<=m;j+=i) prime[j]=0;
	}
	vector<int> ans;
	for(int i=1;i<=m;i++) if(prime[i]) ans.pb(i);
	
	cout<<ans.size()<<"\n";
	for(int i:ans){
		cout<<i<<"\n";
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




