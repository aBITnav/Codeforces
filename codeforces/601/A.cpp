#include<bits/stdc++.h>
using namespace std;

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,f=1,p;
	cin>>n>>m;
	int g[n+1][n+1],dis[n+1]={},vis[n+1]={1,1};
	memset(g,0,sizeof(g));
	memset(dis,-1,sizeof(dis));
	while(m--){
		cin>>x>>y;
		g[x][y]=g[y][x]=1;
	}
	if(g[1][n]) f=0;
	queue<int> q;
	q.push(1);
	dis[1]=0;
	while(!q.empty()){
		p=q.front();
		q.pop();
		for(int i=1;i<=n;i++)
		if(g[p][i]==f and !vis[i]){
			vis[i]=1;
			dis[i]=dis[p]+1;
			q.push(i);
		}
	}
	cout<<dis[n];
}


