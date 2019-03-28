#include <bits/stdc++.h>
using namespace std;


int main() {
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		if(i%2==0) for(int j=0;j<n;j++)  cout<<"#";
		if(i%4==1) {
			 for(int j=0;j<n-1;j++)  cout<<".";
			 cout<<"#";
		}
		if(i%4==3) {
			cout<<"#";
			 for(int j=0;j<n-1;j++)  cout<<".";
			 
		}
		cout<<endl;}
	
	return 0;
}