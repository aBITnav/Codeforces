#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t,p;
	cin>>p>>t;
	s=p;
	reverse(p.begin(),p.end());
	
	if(p==t) cout<<"YES";
	else cout<<"NO";
	
	
	return 0;
}