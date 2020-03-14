#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n,x;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		set<int> s;
		for(int i=0;i<n;i++) cin>>x,s.insert(x);
		cout<<s.size()<<endl;
		
	}
	return 0;
}