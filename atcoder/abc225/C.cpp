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
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>a[i][j];
	int b=(a[0][0]-1)/7;
	for(int i=1;i<n;i++){
		if((a[0][i]-1)/7!=b){
			cout<<"No";
			return;
		}
	}
	for(int i=0;i<m;i++) for(int j=0;j<n;j++){
		if((i!=m-1 and a[i+1][j]-a[i][j]!=7) or (j!=n-1 and a[i][j+1]-a[i][j]!=1)){
			cout<<"No";
			return;
		}
	}
	cout<<"Yes";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}

