#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define pi pair<int,int>
char g[700][700];
int vis[700][700],k;
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
void dfs(int r,int c){
	vis[r][c]=1;
	for(int i=0;i<4;i++){
		if(g[r+dx[i]][c+dy[i]]=='.' and !vis[r+dx[i]][c+dy[i]])
			dfs(r+dx[i],c+dy[i]);
	}
	if(k>0){
		g[r][c]='X';
		k--;
	}
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,p,q;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
			vis[i][j]=0;
			if(g[i][j]=='.') p=i,q=j;
		}
	dfs(p,q);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cout<<g[i][j];
			cout<<endl;
	}
	
}


