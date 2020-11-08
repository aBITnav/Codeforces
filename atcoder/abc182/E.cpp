#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int h,w;
int g[1505][1505];
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

void dfs(int p,int q,int d){
	g[p][q]=3;
	int x=p+dx[d],y=q+dy[d];
	if(x>=0 and x<h and y>=0 and y<w and (g[x][y]==0 or g[x][y]==3))
		dfs(x,y,d);
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>h>>w;
	int n,m,x,y,ans=0;
	cin>>n>>m;
	memset(g,0,sizeof(g));
	while(n--){
		cin>>x>>y;
		x--;y--;
		g[x][y]=1;
	}
	while(m--){
		cin>>x>>y;
		x--;y--;
		g[x][y]=2;
	}
	rep(i,0,h) rep(j,0,w)	if(g[i][j]==1)	rep(k,0,4) {
		int x=i+dx[k],y=j+dy[k];
		if(x>=0 and x<h and y>=0 and y<w and (g[x][y]==0 or g[x][y]==3))
			dfs(x,y,k);
	}
		
	
	rep(i,0,h) rep(j,0,w) if(g[i][j]==3 or g[i][j]==1) ans++;
	cout<<ans;
	
	
}



