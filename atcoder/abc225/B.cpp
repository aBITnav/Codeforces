#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define endl		"\n"
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



void solve() {
	int n;
	cin>>n;
	int x,y;
	int deg[n+1]={};
	rep(i,1,n){
		cin>>x>>y;
		deg[x]++;
		deg[y]++;
		if(deg[x]==n-1 or deg[y]==n-1){
			cout<<"Yes";
			return;
		}
	}
	cout<<"No";
	

}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}

