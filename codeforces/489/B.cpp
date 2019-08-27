#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n,c=0,x,a[105]={},b[105]={},p;
	cin>>m;
	for(int i=0;i<m;i++) {
		cin>>x;
		a[x]++;	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		b[x]++;	} 
	for(int i=1;i<102;i++){
		p=min(a[i],b[i-1]);
		c+=p;
		a[i]-=p;
		b[i-1]-=p;
		p=min(a[i],b[i]);
		c+=p;
		a[i]-=p;
		b[i]-=p;
		p=min(a[i],b[i+1]);
		c+=p;
		a[i]-=p;
		b[i+1]-=p;
		
	}
	cout<<c;
}