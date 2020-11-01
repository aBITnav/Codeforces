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

void solve() {
	int n,x;
	cin>>n;
	int a[n][n];
	int mx1=-1,mx2=-1,x1,y1,x2,y2;
	map<int,int> ad,sub;
	rep(i,0,n) rep(j,0,n){
		cin>>x;
		a[i][j]=x;
		sub[i-j]+=x;
		ad[i+j]+=x;
	}
	rep(i,0,n) rep(j,0,n){
		x=ad[i+j]+sub[i-j]-a[i][j];
		if((i+j)%2==0){
			if(x>mx1) mx1=x,x1=i,y1=j;
		}
		else{
			if(x>mx2) mx2=x,x2=i,y2=j;
		}
	}
	cout<<mx1+mx2<<"\n";
	cout<<x1+1<<" "<<y1+1<<" "<<x2+1<<" "<<y2+1<<"\n";
	 
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



