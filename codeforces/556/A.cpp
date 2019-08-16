#include <iostream>
using namespace std;

int main() {
	int n,a=0,b=0;
	char x;
	cin>>n;
	while(n--){
		cin>>x;
		if(x=='1') a++;
		else b++;
	}
	cout<<abs(a-b);
	return 0;
}