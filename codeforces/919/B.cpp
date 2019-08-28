#include <iostream>
using namespace std;
int s(int n){
	int a=0;
	while(n){
		a+=n%10;
		n/=10;
	}
	return a;
}

int main() {
	int c=0,k;
	cin>>k;
	for(int i=19;i<20000000;i++) if(s(i)==10) {
		c++;
		if(c==k) {cout<<i;
		break;}
		}
	return 0;
}