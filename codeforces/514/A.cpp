#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	if(s[0]=='9')
		for(int i=1;i<s.size();i++)
			{if(s[i]>'4') s[i]='9'-s[i]+'0';}
	else	
	for(int i=0;i<s.size();i++){
		if(s[i]>'4') s[i]='9'-s[i]+'0';
	}
	cout<<s;
	return 0;
}