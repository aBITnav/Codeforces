#include <iostream>
using namespace std;

int main() {
	long long n,p;
	cin>>n>>p;
	if(p<=(n+1)/2) cout<<2*p-1;
	else cout<<2*(p-(n+1)/2);
	return 0;
}