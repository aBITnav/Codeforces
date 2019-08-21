#include <iostream>
using namespace std;

int main() {
	string s;
	int i;
	cin>>s;
	for(i=0;i<s.size();i++)
		if(s[i]=='0') break;
	if(i==s.size())
	for(int p=1;p<s.size();p++)
	cout<<s[p];
	else
	for(int p=0;p<s.size();p++){
		if(p!=i) cout<<s[p];
		else continue;
	}
}