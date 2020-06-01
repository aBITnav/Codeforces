#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	if(n<3) cout<<n;
	else if(n%6==0)
	cout<<(n-1)*(n-2)*(n-3);
	else if(n%2==1) 
	cout<<n*(n-1)*(n-2);
	else  cout<<n*(n-1)*(n-3);
}


