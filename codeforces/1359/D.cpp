#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int ans=0,n,i;
	cin>>n;
	int a[n];
	rep(i,n) cin>>a[i];
	for(int x=1;x<31;x++){
		int dp[n+1]={},mx=0;
		
		for(int i=0;i<n;i++){
			if(a[i]>x){
				dp[i+1]=0;	
				continue;
			}
			dp[i+1]=max({dp[i]+a[i],a[i],0ll});
			mx=max(mx,dp[i+1]); 	
		}
		ans=max(ans,mx-x);
	}
	cout<<ans;
}


