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
	int m,c=0,t=1,i,j,k,sum=0,ans,x,y;
	cin>>t;
	while(t--){
		int n,k,x,y,p;
		cin>>n>>k;	
		vector<int> g[n+1],deg(n+1);
		for(i=1;i<n;i++){
			cin>>x>>y;
			g[x].pb(y);
			g[y].pb(x);
			deg[x]++;
			deg[y]++;
		}
		
		if(n==1 or deg[k]<2) cout<<"Ayush\n";
		else if(n%2==1) cout<<"Ashish\n";
		else cout<<"Ayush\n";
		
	}
	return 0;
}


