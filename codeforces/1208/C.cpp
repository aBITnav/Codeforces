#include <iostream>
using namespace std;

int main() {
	int n,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++)
	cout<<(i/4*(n/4)+j/4)*16+i%4*4+j%4<<" ";
	cout<<endl;
	}
	return 0;
}