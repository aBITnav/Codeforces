#include<bits/stdc++.h>
using namespace std;
#define int long long
int M=1e9+7;

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,d;
	cin>>n>>k>>d;
	int dp1[n+1]={1},dp2[n+1]={1};
	for(int i=1;i<=n;i++)
		for(int j=1;j<=k;j++)
			if(i>=j) dp1[i]=(dp1[i]%M+dp1[i-j]%M)%M;
	for(int i=1;i<=n;i++)
		for(int j=1;j<d;j++)
			if(i>=j) dp2[i]=(dp2[i]%M+dp2[i-j]%M)%M;
	cout<<(dp1[n]-dp2[n]+M)%M;
		
}


