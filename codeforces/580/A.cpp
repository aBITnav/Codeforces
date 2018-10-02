#include <iostream>
using namespace std;

int main() {
	int n,maxlocal=0,maxglobal=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)  cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i]<=a[i+1]) maxlocal++;
		else maxlocal=0;
		if(maxglobal<maxlocal) maxglobal=maxlocal;
	}
	cout<<maxglobal+1;
}