#include <iostream>
using namespace std;

int main() {
	string s="qwertyuiopasdfghjkl;zxcvbnm,./",a;
	char c;
	cin>>c>>a;
	if(c=='R')  for(int i=0;i<a.size();i++)
		cout<<s[s.find(a[i])-1];
		
	else for(int i=0;i<a.size();i++)
		cout<<s[s.find(a[i])+1];
	return 0;
}