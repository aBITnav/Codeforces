#include <iostream>
using namespace std;

int main() {
	int n,i,k,x;
	cin>>n;
	int a[n],sum[n];
	cin>>a[0];
	sum[0]=a[0];
	for(i=1;i<n;i++){
		cin>>a[i];
		sum[i]=a[i]+sum[i-1];
	}
	cin>>k;
	while(k--){
		cin>>x;
		cout<<(lower_bound(sum,sum+n,x)-sum+1)<<endl;
	}

	
	return 0;
}