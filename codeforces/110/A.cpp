#include <iostream>
using namespace std;

int main() {
	string s;
	int fn7=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
		if(s[i]=='4' || s[i]=='7') fn7++;
	if(fn7==4 || fn7==7) cout<<"YES";
	else cout<<"NO";
	return 0;
}