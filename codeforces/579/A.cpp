#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
    while(n>0){
    	c+=(n%2);
    	n/=2;
    }
    cout<<c;
	return 0;
}