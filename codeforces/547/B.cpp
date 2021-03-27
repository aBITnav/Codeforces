#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,l;
	cin>>n;
	int a[n],nsl[n],nsr[n],ans[n+1]={};
	stack<int> q,r;
	rep(i,0,n){
		cin>>a[i];
		while(!q.empty() and a[q.top()]>=a[i]) q.pop();
		nsl[i]=(q.empty()?-1:q.top());
		q.push(i);
	}
	rep(i,n-1,-1){
		while(!r.empty() and a[r.top()]>=a[i]) r.pop();
		nsr[i]=(r.empty()?n:r.top());
		r.push(i);
		l=nsr[i]-nsl[i]-1;
		ans[l]=max(ans[l],a[i]);
	}
	rep(i,n-1,-1) ans[i]=max(ans[i],ans[i+1]);
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
}




