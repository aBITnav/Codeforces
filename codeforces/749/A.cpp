#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int t=n/2-n%2,t3=n%2;
	cout<<n/2<<endl;
	for(int i=0;i<t;i++){
		cout<<"2 ";
	}
	if(t3) cout<<3;
	
	return 0;
}