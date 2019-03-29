#include <bits/stdc++.h>
using namespace std;

int main() {
	bool p[1000005];
	memset(p,true,sizeof(p));
	for(int i=2;i<1001;i++)
		if(p[i])
		for(int j=i*i;j<1000005;j+=i)
		    p[j]=false;
	int n;
	cin>>n;
	for(int i=4;i<=n;i++){
		if(!p[i] && !p[n-i]){
			cout<<i<<" "<<n-i;
			break;
		}  }
	
	return 0;
}