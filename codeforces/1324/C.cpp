#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n,x,y,m;
	cin>>t;
	while(t--){
		int mx=0,p=0,d=0;
		string s;
		cin>>s;
		s="R"+s+"R";
		for(int i=1;i<s.size();i++)
			if(s[i]=='R'){
				d=i-p;
				mx=max(d,mx);
				p=i;}
			
		
		cout<<mx<<endl;
	}
	
	return 0;
}