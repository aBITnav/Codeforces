#include <iostream>
using namespace std;

int main() {
	int k,r,i;
	cin>>k>>r;
	for(i=1;i<11;i++)
		if((k*i)%10==r || (k*i)%10==0) {cout<<i; break;}
	
	return 0;
}