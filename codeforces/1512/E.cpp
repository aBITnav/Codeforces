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
	int n,l,r,m,s,lb,ub;
	cin>>n>>l>>r>>s;
	m=r-l+1;
	lb=(m*(m+1))/2;
	ub=(m*(2*n+1-m))/2;
	if(s<lb or s>ub){
		cout<<-1<<endl;
		return;
	}
	vector<int> v(m),sol(n);
	set<int> st;
	rep(i,1,n+1) st.insert(i);
	for(int i=0;i<m;i++){
		int mx=n-i;
		int nx=((m-i)*(m-i-1))/2;
		if(nx+mx>s) mx=s-nx;
		v[i]=mx;
		s-=mx;
	}
	int j=-1;
	for(int i:v) {
		sol[l+j]=i;
		j++;
		st.erase(i);
	}
	rep(i,0,n) if(!sol[i]){
		sol[i]=(*st.begin());
		st.erase(st.begin());
	}
	for(int i:sol) cout<<i<<" ";cout<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




