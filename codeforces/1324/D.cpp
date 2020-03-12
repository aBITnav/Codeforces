#include <bits/stdc++.h> 
using namespace std; 
#define int long long
signed main() {
	int n,ans=0,p=0,o=0;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i],c[i]=a[i]-b[i];
	sort(c,c+n);
	for(int i=0;i<n;i++)
		if(c[i]<0)	ans+=(n-(upper_bound(c,c+n,-c[i])-c));
		else if(c[i]==0) o++;
		else p++;
	cout<<ans+(o*p+(p*(p-1))/2);;
	return 0;
}