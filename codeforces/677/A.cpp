#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,ans=0,x;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>k) ans+=2;
		else ans++;
	}
	cout<<ans;
	return 0;
}