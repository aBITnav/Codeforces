#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	set<long long> s;
	for(int i=0;i<4;i++) {
		cin>>x;
		s.insert(x);
	}
	cout<<4-s.size();
	return 0;
}