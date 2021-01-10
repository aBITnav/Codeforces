#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,mx=-1e18;
	cin>>n>>m;
	vector<int> R[n],cost(n);
	for(int i=0;i<n;i++) cin>>cost[i];
	while(m--){
		cin>>x>>y;
		R[y-1].push_back(x-1);
	}
	for(int i=0;i<n;i++){
		int mn=1e18;
		for(int j:R[i])	mn=min(mn,cost[j]);
		mx=max(mx,cost[i]-mn);
		cost[i]=min(cost[i],mn);
	}
	cout<<mx;
}