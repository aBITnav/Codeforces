#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,p,q,r,s,t,u,v,w;
	cin>>n;
	p=n/100;q=n%100;r=q/20;s=q%20;t=s/10;u=s%10;v=u/5;w=u%5;
	cout<<p+r+t+v+w;
		
	}