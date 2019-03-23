#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin>>a;
	a="WUB"+a+"WUB";
		vector<int> p;
	for(int i=0;i<a.size()-2;i++)
	   if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
	  p.push_back(i);
	for(int i=0;i<p.size()-1;i++){
		if(p[i+1]!=(p[i]+3)){
		for(int j=p[i]+3;j<p[i+1];j++)
		cout<<a[j];
		cout<<" ";}
	}

	return 0;
}