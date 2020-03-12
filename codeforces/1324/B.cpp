#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n,x,y,m;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],mx=0;
		string ans="NO";
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) 
			for(int j=i+2;j<n;j++)
				if(a[i]==a[j]) ans="YES";
		cout<<ans<<endl;
	}
	
	return 0;
}