#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char,int> m;
	m['q']=m['Q']=9;
	m['r']=m['R']=5;
	m['b']=m['B']=m['n']=m['N']=3;
	m['p']=m['P']=1;
	string s[8];
	int w=0,b=0;
	for(int i=0;i<8;i++) {cin>>s[i];
	for(int j=0;j<8;j++) if(s[i][j]>='a') b+=m[s[i][j]];
	else w+=m[s[i][j]];
	}
	if(w>b) cout<<"White";
	else if(b>w) cout<<"Black";
	else cout<<"Draw";
}