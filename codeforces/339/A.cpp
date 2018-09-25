#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int l=s.size();
	vector <int> a;
	
	for(int i=0;i<l;i+=2){
		a.push_back(s[i]-'0');
	}
	sort(a.begin(),a.end());
	for(int i=0;i<l;i++){
		if(i%2==0) cout<<a[i/2];
		else cout<<"+";
	}
	
	return 0;
}