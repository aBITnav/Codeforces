#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,x;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	cin>>t;
	while(t--){
		cin>>x;
		if(x<a[0]) cout<<0<<"\n";
		else cout<<(upper_bound(a.begin(),a.end(),x)-a.begin())<<"\n";
	}
	return 0;
}