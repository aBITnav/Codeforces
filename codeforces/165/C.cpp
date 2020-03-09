#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int k,t,a=0;
	string s;
	cin>>k>>s;
	int n=s.size();
	vector<int> v;
	v.push_back(-1);
	for(int i=0;i<n;i++) if(s[i]=='1') v.push_back(i);
	v.push_back(n);
	if(k==0){
		for(int i=1;i<v.size();i++)
			a+=((v[i]-v[i-1])*(v[i]-v[i-1]-1))/2;
		cout<<a;
	}
	else if(v.size()<k+2) cout<<0;
	else{
		for(int i=1;i<v.size()-k;i++)
			a+=((v[i]-v[i-1])*(v[i+k]-v[i+k-1]));
		cout<<a;
	}
	
	return 0;
}