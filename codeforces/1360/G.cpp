#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,t=1,i,j,k,sum=0,ans,a,b;
	cin>>t;
	while(t--){
		cin>>n>>m>>a>>b;
		if(m*b!=n*a){
			cout<<"NO\n";
			continue;
		}
		int g[n][m];
		memset(g,0,sizeof(g));
		for(int i=0;i<a*n;i++){
			g[i/a][i%m]=1;
		}
		cout<<"Yes\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cout<<g[i][j];
			cout<<endl;
		}
	}
}


