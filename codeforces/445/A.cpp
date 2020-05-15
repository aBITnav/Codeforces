#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define pi pair<int,int>
char g[700][700];
int vis[700][700];
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
void dfs(int r,int c){
	//vis[r][c]=1;
	for(int i=0;i<4;i++)
		if(g[r+dx[i]][c+dy[i]]=='.'){
			if(g[r][c]=='B') g[r+dx[i]][c+dy[i]]='W';
			else g[r+dx[i]][c+dy[i]]='B';
			dfs(r+dx[i],c+dy[i]);
		}
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,p,q;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
			vis[i][j]=0;
		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(g[i][j]=='.'){
				g[i][j]='B';
				dfs(i,j);
			}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cout<<g[i][j];
			cout<<endl;
	}
	
}


