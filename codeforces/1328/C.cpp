#include <bits/stdc++.h>
using namespace std;
signed main() {
	int t=1,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>s;
		string a(n,'1'),b(n,'1');
		for(int i=0;i<n;i++)
			if(s[i]=='1') {
				if(a.substr(0,i)>b.substr(0,i)) a[i]='0',b[i]='1';
				else a[i]='1',b[i]='0';
			}
			else if(s[i]=='2') {
				if(a.substr(0,i)==b.substr(0,i)) a[i]=b[i]='1';
				else if(a.substr(0,i)>b.substr(0,i)) a[i]='0',b[i]='2';
				else a[i]='2',b[i]='0';
			}
			else a[i]=b[i]='0';
		cout<<a<<endl<<b<<endl;	
	}
	return 0;
}