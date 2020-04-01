#include <iostream>
using namespace std;

int main() {
	int n,f;
	cin>>n;
	for(int i=2;i<=n;i++) if(n%i==0){
		f=i;break;
	}
	cout<<f<<n/f;
	return 0;
}