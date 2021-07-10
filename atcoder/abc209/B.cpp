#include <iostream>
using namespace std;

int main() {
	int n,x,s=0,p;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>p;
		if(i%2) p--;
		s+=p;
	}
	if(x>=s) cout<<"Yes";
	else cout<<"No";
	
}