#include <iostream>
using namespace std;

int main() {
	int k,w,n;
	cin>>k>>n>>w;
	long pay=(w*k*(w+1)/2);
	if(pay>n) cout<<(w*k*(w+1)/2)-n;
	else cout<<0;
		
}