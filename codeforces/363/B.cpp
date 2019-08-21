#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,sum=0,mi=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<k;i++) sum+=a[i];
	int s[n-k+1];
	s[0]=sum;
	for(int i=1;i<n-k+1;i++){
		s[i]=s[i-1]+a[i+k-1]-a[i-1];
	}
	int mn=s[0];
	for(int i=1;i<n-k+1;i++){
		if(mn>s[i]){
			mn=s[i]; mi=i;
		}
	}
	cout<<mi+1;
	
	
	
return 0;
}