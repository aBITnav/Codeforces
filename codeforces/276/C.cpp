#include<bits/stdc++.h>
using namespace std;
#define int long long
int M=1e9+7;

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q,l,r;
	cin>>n>>q;
	vector<int> v;
	int a[n],dp[n+2]={};
	for(int i=0;i<n;i++) cin>>a[i];
	while(q--){
		cin>>l>>r;
		dp[l]++;
		dp[r+1]--;
	}
	for(int i=1;i<=n;i++) {
		dp[i]+=dp[i-1];
		v.push_back(dp[i]);
	}
	int ans=0;
	sort(v.begin(),v.end());
	sort(a,a+n);
	for(int i=0;i<n;i++) ans+=(v[i]*a[i]);
	cout<<ans<<endl;
}


