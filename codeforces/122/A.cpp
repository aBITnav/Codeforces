#include <iostream>
using namespace std;

int main() {
	int chk[14]={4,7,44,47,74,77,444,447,474,477,744,747,777,774};
	int n;
	cin>>n;
	int flag=0;
	for(int i=0;i<14;i++)
		if(n%chk[i]==0) flag=1;
	if(flag==0) cout<<"NO";
	else cout<<"YES";
}