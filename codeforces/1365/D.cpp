#include<bits/stdc++.h>
using namespace std;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
 
void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>> &a){
    vis[i][j]=1;
    for(int d=0;d<4;d++){
        int x=i+dx[d];
        int y=j+dy[d];
        if(a[x][y]!='#' and !vis[x][y])
        dfs(x,y,vis,a);
    }
}

void solve(){
	int f=0,gg=0,m,n,x,y,p,q;
        cin>>m>>n;
        vector<vector<char> > a(m+2,vector<char> (n+2,'#'));
        //for(int i=1;i<=m+1;i++){for(int j=1;j<=n+1;j++) cout<<a[i][j];cout<<endl;}
 		for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                if(a[i][j]=='B')
                    for(int k=0;k<4;k++){
                        x=i+dx[k];
                        y=j+dy[k];
                        if(a[x][y]=='G') f=1;
                        else if(a[x][y]!='B') a[x][y]='#';}
                else if(a[i][j]=='G') p=i,q=j,gg++;
    if(gg==0){
    	cout<<"Yes\n";
        return;
	}
    if(f or a[m][n]=='B' or a[m][n]=='#'){
        cout<<"No\n";
        return;
    } 
    
    vector<vector<int> > vis(m+2,vector<int> (n+2,0));
    dfs(p,q,vis,a);
    for(int i=m;i>0;i--)
        for(int j=n;j>0;j--) 
            if(a[i][j]=='G' and !vis[i][j]){
            		cout<<"No\n";
            		return;
    }
	if(!vis[m][n]) cout<<"No\n";
	else  
    cout<<"Yes\n";
}
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}