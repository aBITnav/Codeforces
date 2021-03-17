#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=10000001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int spf[N];

int red(int n){
	int ans=1;
	while(n>1){
		int p=spf[n],x=0;
		while(n%p==0){
			n/=p; x++;
		}
		if(x%2) ans*=p;
	}
	return ans;
}


void solve() {
	int n,k,ans=1;
	cin>>n>>k;
	int a[n];
	rep(i,0,n)	{
		cin>>a[i];
		a[i]=red(a[i]);
	}
	set<int> s;
	rep(i,0,n){
		if(s.count(a[i])){
			ans++;
			s.clear();
		}
		s.insert(a[i]);
	}
	cout<<ans<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	spf[1]=1;
	rep(i,2,N)	if(!spf[i]){
		for(int j=i*i;j<N;j+=i) if(!spf[j]) spf[j]=i;
		spf[i]=i;
	}
	cin>>t;
	while(t--) solve();
	return 0;
}




