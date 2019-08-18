#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	map<string,int> m;
	while(n--){
		cin>>s;
		m[s]++;
	}
	int mx=0;
	for(auto it=m.begin();it!=m.end();it++){
		mx=max(mx,it->second);
	}
	
	for(auto it=m.begin();it!=m.end();it++)
		if((it->second)==mx) cout<<it->first;
	
	
	
	return 0;
}