#include <bits/stdc++.h>
using namespace std;

int main() {
	string sl,s2;
	cin>>sl>>s2;
	transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if(sl==s2) cout<<0;
	else if(sl<s2) cout<<-1;
	else cout<<1;
}