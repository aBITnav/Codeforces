#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	int n=0;
	while(t--){
		string s;
		cin>>s;
		if(s=="X++") n++;
		if(s=="++X") ++n;
		if(s=="--X") --n;
		if(s=="X--") n--;
	}
	cout<<n;
	return 0;
}