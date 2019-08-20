#include <bits/stdc++.h>
using namespace std;

long long p(int n){
	long long ans=1;
	while(n--){
		ans*=2;
	}
	return ans;
}

int main() {
	long long n,l,r,a,b;
	cin>>n>>l>>r;
	a=p(l)-1+n-l;
	b=p(r)-1+p(r-1)*(n-r);
	cout<<a<<" "<<b;
	return 0;
}