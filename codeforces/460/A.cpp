#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n;
	cin>>n>>m;
	int a[100000];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++) a[i]=1;
	int p=n,i=m-1,ans=0;
	while(a[i]!=0){
		a[p]=1;
		p++;
		i+=m;
	}
	i=0;
	while(a[i]!=0){
		ans++;
		i++;
	}
	cout<<ans;
	return 0;
}