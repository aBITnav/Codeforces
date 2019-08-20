#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int z=0;
	cin>>s;
	for(char i:s){
		if(i=='0') z++;
	}
	if(s=="0") cout<<0;
	else if(z==(s.size()-1)) cout<<(s.size())/2;
	
	else{
		cout<<ceil((s.size()*1.0)/2);
	}
	return 0;
}