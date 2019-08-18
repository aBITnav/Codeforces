#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
	return a>b;}

int main() {
	int a[12],k,sum=0;
	cin>>k;
	for(int i=0;i<12;i++) cin>>a[i];
	sort(a,a+12,comp);
	int i=0;
	while(sum<k && i<12 ){
		sum+=a[i++];
	}
	if(sum<k) cout<<-1;
	else cout<<i;
	return 0;
}