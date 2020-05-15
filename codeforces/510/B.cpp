#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define se second
#define pi pair<int,int>

char g[60][60];
int vis[60][60];
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};

string ans="No";

void dfs(int r,int c,int pr,int pc){
	vis[r][c]=1;
	for(int i=0;i<4;i++)
		if(g[r][c]==g[r+dx[i]][c+dy[i]]){
			if(!vis[r+dx[i]][c+dy[i]]) 	
				dfs(r+dx[i],c+dy[i],r,c);
			else if(r+dx[i]!=pr and c+dy[i]!=pc)
			ans="Yes";
		}
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
		cin>>g[i][j];
		vis[i][j]=0;	
	}
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(!vis[i][j]) dfs(i,j,0,0);
	cout<<ans;
	
}


