#include <iostream>
using namespace std;

int main() {
	int n,d,sum=0;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		sum+=a[i];
	}
	if((n-1)*10+sum>d) cout<<-1;
	else cout<<(d-sum)/5;
	return 0;
}