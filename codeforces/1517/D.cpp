#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define endl		"\n"
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

const int M=1e9+7,N=510;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int m,n;
int w[N][N][4],dp[N][N][21];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};


int dfs(int x,int y,int k){
	if(k==0) return 0;
	if(dp[x][y][k]!=-1) return dp[x][y][k];
	int ans=1e18;
	rep(i,0,4){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0 and nx<m and ny>=0 and ny<n) 
			ans=min(ans,w[x][y][i]+dfs(nx,ny,k-1));
	}
	return dp[x][y][k]=ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k,x;
	cin>>m>>n>>k;
	memset(dp,-1,sizeof(dp));
	rep(i,0,m) rep(j,0,n-1){
		cin>>x;
		w[i][j][1]=x;
		w[i][j+1][3]=x;
	}
	rep(i,0,m-1) rep(j,0,n){
		cin>>x;
		w[i][j][2]=x;
		w[i+1][j][0]=x;
	}
	if(k%2){
		rep(i,0,m){
		rep(j,0,n) cout<<"-1 ";cout<<endl;
		}
		return 0;
	}
	rep(i,0,m){
		rep(j,0,n)	{
			int ans=dfs(i,j,k/2);
			if(ans>1e17) ans=-1;
			cout<<2*ans<<" ";
		}
		cout<<endl;
	}
}




