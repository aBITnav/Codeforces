#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,mx=0;
	cin>>n;
	while(n--){
	    cin>>x;
	    mx=max(mx,x);
	}
	cout<<mx;
	return 0;
}