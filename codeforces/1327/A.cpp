#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n,k;
	cin>>t;
	while(t--){
		string ans="NO\n";
		cin>>n>>k;
		if(k%2 and n%2 and n>=k*k) ans="YES\n";
		if(k%2==0 and n%2==0 and n>=k*k) ans="YES\n";
		cout<<ans;
	}
	return 0;
}