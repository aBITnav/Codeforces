#include <iostream>
using namespace std;

int main() {
	long long n,a=1;
	cin>>n;
	if(n%2) cout<<0;
	else{
		cout<<(1<<n/2);
	}
	return 0;
}