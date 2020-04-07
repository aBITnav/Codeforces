#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n,x,mx=0;
	cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++) {
		cin>>x;
		mp[x-i]+=x;	
	}
	for(auto i:mp)
		mx=max(mx,i.second);
	cout<<mx;
	return 0;
}

