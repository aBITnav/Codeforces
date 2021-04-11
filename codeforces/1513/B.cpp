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

int F[N]={1};

bool chk(vector<int>& a){
	int x=a[0];
	for(int i:a) if((i&x)!=x) return false;
	return true;
}

void solve() {
	int n,mn;
	cin>>n;
	map<int,int> f;
	vector<int> a(n);
	rep(i,0,n){
		cin>>a[i];
		f[a[i]]++;
	}
	sort(all(a));
	mn=f[a[0]];
	if(mn<2 or !chk(a)){
		cout<<0<<endl;
		return;
	}
	int ans=mm(mn-1,mm(mn,F[n-2]));
	cout<<ans<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=1;i<N;i++) F[i]=mm(F[i-1],i);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




