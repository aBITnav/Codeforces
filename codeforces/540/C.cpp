#include<bits/stdc++.h>
using namespace std;
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
vector<vector<char>> g(502,vector<char>(502,'X'));
int m,n,sx,sy,ex,ey;
string ans="NO";

void dfs(int x,int y){
	if(x==ex and y==ey and g[x][y]=='X'){
		ans="YES";
		return;
	}
	if(g[x][y]=='.'){	
		g[x][y]='X';
		rep(i,0,4)	dfs(x+dx[i],y+dy[i]);	
	}
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>m>>n;
	rep(i,1,m+1) rep(j,1,n+1) cin>>g[i][j];
	cin>>sx>>sy>>ex>>ey;
	g[sx][sy]='.';
	dfs(sx,sy);
	cout<<ans;
	return 0;
}




