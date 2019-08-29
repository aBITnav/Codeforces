#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int c=0;
	vector<int> a,q;
	for(int i=0;i<s.size();i++){
		if(s[i]=='Q') q.push_back(i);
		if(s[i]=='A') a.push_back(i);
	}
	for(int i:a){
		for(int j:q)
			if(j<i)
				for(int k:q) if(k>i) c++;	
			
		
	}
	cout<<c;
	
	return 0;
}