#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define se second
#define pi pair<int,int>





signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int mx=0,d=0,j;
	for(int i=1;i<=n;i++){
		int d=0;
		j=i;
		while(j!=-1){
			j=a[j];
			d++;
		}
		mx=max(d,mx);
	}
	cout<<mx;
	
	
}


