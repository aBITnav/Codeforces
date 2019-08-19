#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=0;
	string s;
	cin>>s;
	for(char i:s) if(i=='a') a++;
	cout<<min((int)s.size(),2*a-1);
	return 0;
}