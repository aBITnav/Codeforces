#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s;
	cin>>n>>s;
	int a[n]={},ans[n]={};
	int ni=s/9;
	if((s==0 and n!=1) || s>(9*n)) cout<<-1<<" "<<-1;
	else{
		for(int i=0;i<ni;i++)
		a[i]=9;
		a[ni]=s%9;
		for(int i=ni+1;i<n;i++)
		a[i]=0;
		for(int i=0;i<n;i++) ans[i]=a[i];
		if(a[n-1]==0){
			a[n-1]++;
			if(a[ni]!=0) a[ni]--;
			else a[ni-1]--;
		}
		for(int i=n-1;i>=0;i--) cout<<a[i];
		cout<<" ";
		for(int i=0;i<n;i++) cout<<ans[i];
	}
	
	return 0;
}