#include <iostream>
using namespace std;

int main() {
	string s;
	int a[26]={0};
	int sum=0;
	cin>>s;
	int l=s.size();
	for(int i=0;i<l;i++)
		a[s[i]-'a']=1;
	for(int i=0;i<26;i++)
		if(a[i]==1) sum++;
	if(sum%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}