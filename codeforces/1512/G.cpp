#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=10000002;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int sf[N];
vector<int> fs(N,-1);


void solve() {
	int n;
	cin>>n;
	cout<<fs[n]<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	for(int i=1;i<N;i++) for(int j=i;j<N;j+=i) sf[j]+=i;
	//rep(i,0,20) cout<<sf[i]<<" ";
	for(int i=1;i<N;i++) if(sf[i]<N and fs[sf[i]]==-1) fs[sf[i]]=i;
	cin>>t;while(t--) solve();
	return 0;
}




