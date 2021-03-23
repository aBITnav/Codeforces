#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=15500001;

int spf[N];

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	spf[0]=spf[1]=1;
	for(int i=2;i<N;i++) if(!spf[i]) {
		for(int j=i*i;j<N;j+=i) if(!spf[j]) spf[j]=i;
		spf[i]=i;
	}
	int n,g=0,mx=0,ans;
	cin>>n;
	int a[n];
	rep(i,0,n)	{
		cin>>a[i];
		g=__gcd(g,a[i]);	
	}
	unordered_map<int,int> f;
	rep(i,0,n) {
		a[i]/=g;
		while(a[i]>1){
			int pf=spf[a[i]];
			f[pf]++;
			mx=max(mx,f[pf]);
			while(a[i]!=1 and a[i]%pf==0) a[i]/=pf;
		}
	}
	ans=n-mx;
	if(!mx) ans=-1;
	cout<<ans;
	
	
	 
	
	
	return 0;
}




