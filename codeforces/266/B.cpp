#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	string s;
	cin>>n>>t>>s;
	while(t--){
		vector<int> v;
		for(int i=0;i<n-1;i++)
		if(s[i]=='B' and s[i+1]=='G') v.push_back(i);
		for(int i:v) {s[i]='G';
		s[i+1]='B';}
		
	}
	cout<<s;
	return 0;
}