#include <iostream>
using namespace std;

int main() {
	int m,n,ans=0;
	cin>>m>>n;
	while(1){
		ans++;
		m*=3;n*=2;
		if(m>n){
			cout<<ans;
			break;
		}
	}
	return 0;
}