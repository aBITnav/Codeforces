#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin>>n;
	map<int,int> m;
	while(n--){
		cin>>x>>y;
		m[x*60+y]++;
	}
	int mf=0;
	for(auto i:m)
	mf=max(i.second,mf);
	cout<<mf;
	return 0;
}