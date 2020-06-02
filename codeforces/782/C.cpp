#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> g[201000],c(201000);

void dfs(int p,int pp){
	int k=1;
	for(int i:g[p])
		if(i!=pp){
			while(c[p]==k or c[pp]==k) k++;
			c[i]=k++;
			dfs(i,p);
		}
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y,p;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	c[1]=1;
	dfs(1,0);
	int mx=0;
	for(int i=1;i<=n;i++) mx=max(mx,c[i]);
	cout<<mx<<endl;
	for(int i=1;i<=n;i++) cout<<c[i]<<" ";

	
	
	
}


