#include <iostream>
using namespace std;

int main() {
	int n,x,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>x;
		if(x) ans++;
        a[i]=(x?-1:1);
	}
	int lmax=-1,gmax=-1;
	for(int i:a) {
		lmax=max(lmax+i,i);
		gmax=max(lmax,gmax);  }
	cout<<gmax+ans;
	return 0;
}