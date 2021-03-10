#include<bits/stdc++.h>
using namespace std;
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,p,i=0,ans=0;
	cin>>n>>m>>p;
	int a[n],b[m];
	rep(i,0,n) cin>>a[i];
	rep(i,0,m) cin>>b[i];
	while(i<n and a[i]%p==0) i++;
	ans+=i;
	i=0;
	while(i<m and b[i]%p==0) i++;
	ans+=i;
	cout<<ans;
}




