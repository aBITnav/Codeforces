#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n=s.size(),f=0;
	vector<int> ab,ba;
	for(int i=0;i<n-1;i++){
		if(s[i]=='A' and s[i+1]=='B') ab.push_back(i);
		if(s[i]=='B' and s[i+1]=='A') ba.push_back(i);
	}
	for(int i=0;i<ab.size();i++)
	for(int j=0;j<ba.size();j++)
		if(abs(ab[i]-ba[j])!=1) {f=1;
	break;}
	cout<<(f?"YES":"NO");
	return 0;
}