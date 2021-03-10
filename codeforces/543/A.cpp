#include<bits/stdc++.h>
using namespace std;
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int n,m,bug,M;
int a[501];

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m>>bug>>M;
	vector<vector<int>> pre(m+1,vector<int> (bug+1));
	rep(i,0,bug+1) pre[0][i]=1;
	rep(i,0,n){
		cin>>a[i];
		vector<vector<int>> dp(m+1,vector<int> (bug+1));
		rep(s,0,m+1){
			rep(b,0,bug+1){
				dp[s][b]=pre[s][b];
				if(s>0 and a[i]<=b)
				dp[s][b]=(pre[s][b]+dp[s-1][b-a[i]])%M;
			}
		}
		swap(pre,dp);
	}
	cout<<pre[m][bug];
	return 0;
}




