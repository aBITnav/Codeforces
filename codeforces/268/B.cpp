#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n+1];
	a[0]=0;a[1]=1;a[2]=3;
	for(int i=3;i<=n;i++)
	a[i]=a[i-1]+(i*(i-1))/2 + 1;
	cout<<a[n];
	return 0;
}