#include <iostream>
using namespace std;

int main() {
	string s;
	int n;
	cin>>n;
	int a=0,d=0;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='A') a++;
		else d++;
	}
	if(a>d)
	 cout<<"Anton";
	
	else if(d>a) cout<<"Danik";
	
	else cout<<"Friendship";
	return 0;
}