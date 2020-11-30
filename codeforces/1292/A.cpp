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




signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q,x,y,ans=0;
	cin>>n>>q;
	map<int,bool> m[2];
	while(q--){
		cin>>x>>y;
		x--;
		if(m[x][y]==1){
			m[x][y]=0;
			ans-=m[!x][y]+m[!x][y+1]+m[!x][y-1];
		}
		else{
			m[x][y]=1;
			ans+=m[!x][y]+m[!x][y+1]+m[!x][y-1];
		}
		if(ans>0) cout<<"No\n";
		else cout<<"Yes\n";
	}
	return 0;
}



