#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<int> o,e;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2) o.push_back(i+1);
			else e.push_back(i+1);
		}
		if(e.size()>0) cout<<1<<"\n"<<e[0]<<"\n";
		else if(o.size()>1) cout<<"2\n"<<o[0]<<" "<<o[1]<<"\n";
		else cout<<"-1\n";
	}
	return 0;
}