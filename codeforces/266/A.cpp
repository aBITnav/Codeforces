#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string s;
	cin>>s;
	int c=0;
	int l=s.size();
	
	for(int i=0;i<l-1;i++)
		if(s[i]==s[i+1]) c++;
	cout<<c;
}