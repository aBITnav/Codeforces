#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n,x,y,m;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],mx=0;
		string ans="YES";
		for(int i=0;i<n;i++) cin>>a[i],mx=max(mx,a[i]);
		for(int i=0;i<n;i++) if((mx-a[i])%2) ans="NO";
		cout<<ans<<endl;
	}
	
	return 0;
}