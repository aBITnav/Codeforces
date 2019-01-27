#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,e,mx=0;
	cin>>n;
	set<int> s;
	for(int i=0;i<2*n;i++){
		cin>>e;
		if(s.find(e)!=s.end()) s.erase(e);
		else s.insert(e);
		if(s.size()>mx) mx=s.size();
		
	}
	cout<<mx;
	return 0;
}