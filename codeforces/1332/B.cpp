#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		map<int,int> mp;
		int a[12]={2,3,5,7,11,13,17,19,23,29,31,37},b[n];
		for(int i=0;i<n;i++)	cin>>b[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<12;j++)
				if(b[i]%a[j]==0){
					mp[a[j]]++;
					b[i]=a[j];
					break;
				}
		cout<<mp.size()<<endl;
		for(int i=0,j=1;i<12;i++)
			if(mp[a[i]]>0){
				mp[a[i]]=j;
				j++;
			}
		for(int i=0;i<n;i++)
			cout<<mp[b[i]]<<" ";
		cout<<endl;
	}
	return 0;
}