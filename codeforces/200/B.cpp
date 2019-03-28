#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	double sum=0;
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
	}
	sum/=n;
	
	printf("%.12f",sum);
	return 0;
}