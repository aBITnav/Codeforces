#include <bits/stdc++.h>
using namespace std;
bool comp(char a,char b){
	return a<b;
}

int main() {
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	s1=s1+s2;
	sort(s1.begin(),s1.end(),comp);
	sort(s3.begin(),s3.end(),comp);
	if(s1==s3) cout<<"YES";
	else cout<<"NO";
	return 0;
}