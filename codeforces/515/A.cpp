#include <iostream>
using namespace std;

int main() {
	int a,b,s;
	cin>>a>>b>>s;
	a=abs(a);b=abs(b);
	int d=s-a-b;
	if(d<0 || d%2) cout<<"No";
	else cout<<"Yes";
	return 0;
}