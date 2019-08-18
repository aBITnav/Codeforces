#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	map<int,int> m;
	while(n--){
		cin>>x;
		m[x]++;
	}
	int mx=0;
	for(auto it=m.begin();it!=m.end();it++){
		mx=max(mx,it->second);
	}
	
	for(auto it=m.begin();it!=m.end();it++)
		if((it->second)==mx) {cout<<it->second; break;}
	
	cout<<" "<<m.size();
	
	return 0;
}