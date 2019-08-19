#include <iostream>
using namespace std;

int main() {
	string s="Poor Alex";
	int n,x,y;
	cin>>n;
	while(n--){
		cin>>x>>y;
		if(x!=y) {
			s="Happy Alex";
			break;
		}
	}
	cout<<s;
	return 0;
}