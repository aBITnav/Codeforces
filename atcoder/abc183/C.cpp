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
int t[9][9];

int cost(vector<int> &v){
	int n=v.size();
	int c=t[0][v[0]]+t[v[n-1]][0];
	for(int i=1;i<n;i++) c+=t[v[i-1]][v[i]];
	return c;
}



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,ans=0;
	cin>>n>>k;
	rep(i,0,n) rep(j,0,n) cin>>t[i][j];
	vector<int> v;
	rep(i,1,n) v.pb(i);
	do{
		if(cost(v)==k) ans++;
	}while(next_permutation(all(v)));
	cout<<ans<<"\n";
	return 0;
}



