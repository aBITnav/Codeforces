#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int a[n];
	long long s=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
		s=a[0]-1;
	for(int i=1;i<n;i++){
		s+=(a[i]-a[i-1]);
		if((a[i]-a[i-1])<0) s+=m;
	}
	cout<<s;
	
	return 0;
}