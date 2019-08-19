#include <iostream>
using namespace std;

int main() {
	int n,l=0,r=0;
	cin>>n;
	int a[n+1][2];
	for(int i=1;i<=n;i++) {cin>>a[i][0]>>a[i][1];
	l+=a[i][0];r+=a[i][1];
	}
	int mi=0,md=abs(l-r);
	for(int i=1;i<=n;i++){
		int d=abs(l-r-2*a[i][0]+2*a[i][1]);
		if(d>md){
			md=d;
			mi=i;
		}
	}
	cout<<mi;
		
	
	return 0;
}