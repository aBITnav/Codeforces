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
	cin>>n>>m;
	vector<int> h(n+1),mx(n+1,0);
	for(int i=1;i<=n;i++) cin>>h[i];
	while(m--){
		cin>>x>>y;
		mx[x]=max(mx[x],h[y]);
		mx[y]=max(mx[y],h[x]);
	}
	for(int i=1;i<=n;i++) if(h[i]>mx[i]) c++;
	cout<<c;
	return 0;
}


