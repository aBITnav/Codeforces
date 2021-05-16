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

bool chk(vector<int>& a){
	for(int i=1;i<a.size();i++) if(a[i]<a[i-1]) return false;
	return true;
}

void solve() {
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i,0,n) 	cin>>a[i];
	if(chk(a)) cout<<0;
	else if(a[0]==1 or a[n-1]==n) cout<<1;
	else if(a[0]==n and a[n-1]==1) cout<<3;
	else cout<<2;
	cout<<endl;

}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




