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
	int n,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y;
	while(t--){
		cin>>n>>m;
		int vis[50000]={},dis[50000]={};
		queue<int> q;
		q.push(n);
		while(!q.empty()){
			n=q.front();
			vis[n]=1;
			q.pop();
			i=2*n,j=n-1;
			if(i<50000 and !vis[i]){
				dis[i]=dis[n]+1;
				vis[i]=1;
				q.push(i);
			}
			if(j>0 and !vis[j]){
				dis[j]=dis[n]+1;
				vis[j]=1;
				q.push(j);
			}
			if(i==m){
				ans=dis[i];break;
			}
			if(j==m){
				ans=dis[j];break;
			}
			
		}
		cout<<ans<<endl;
		
		
	}
	return 0;
}


