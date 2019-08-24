#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) 
		cin>>a[i];
	int c=1,mx=1;
	for(int i=0;i<n-1;i++)
		if(a[i+1]<=a[i]) c=1;
		else{
			c++;
			mx=max(c,mx);
		}
		cout<<mx;
}
		
	
	