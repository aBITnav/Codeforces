#include <iostream>
using namespace std;

int main() {
	int n,q,l,r;
	cin>>n;
	int a[n+1],p[n+1]={};
	for(int i=1;i<=n;i++) cin>>a[i],p[i]=p[i-1]+a[i];
	cin>>q;
	while(q--){
		cin>>l>>r;
		cout<<(p[r]-p[l-1])/10<<endl;
	}
	return 0;
}