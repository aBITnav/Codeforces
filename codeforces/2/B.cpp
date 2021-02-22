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
 
int ex(int n,int d){
	int c=0;
	while(n%d==0){
		n/=d;
		c++;
	}
	return c;
}
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,ans=1e9;
	cin>>n;
	string pat;
	int a[n][n],b[n][n],grid[n][n];
	vector<vector<int>> dir2(n,vector<int> (n));
	vector<vector<int>> dir5(n,vector<int> (n));
	rep(i,0,n) rep(j,0,n){
		cin>>grid[i][j];
		if(grid[i][j]==0){
			grid[i][j]=10;
			if(ans==1e9){
				ans=1;
				pat=string(i,'L')+string(n-1,'R')+string(n-i-1,'L');
			}
		}
	}
	rep(i,0,n) rep(j,0,n) {
		x=grid[i][j];
		int p=ex(x,2),q=ex(x,5);
		if(!i and !j) {
			a[i][j]=p;
			b[i][j]=q;
			dir2[i][j]=dir5[i][j]=0;
		}
		else if(!i) {
			a[i][j]=p+a[i][j-1];
			b[i][j]=q+b[i][j-1];
			dir2[i][j]=dir5[i][j]=1;
		}
		else if(!j){
			a[i][j]=p+a[i-1][j];
			b[i][j]=q+b[i-1][j];
			dir2[i][j]=dir5[i][j]=2;
		} 
		else{
			if(a[i][j-1]<a[i-1][j]){
				a[i][j]=p+a[i][j-1];
				dir2[i][j]=1;
			}else{
				a[i][j]=p+a[i-1][j];
				dir2[i][j]=2;
			}
			if(b[i][j-1]<b[i-1][j]){
				b[i][j]=q+b[i][j-1];
				dir5[i][j]=1;
			}else{
				b[i][j]=q+b[i-1][j];
				dir5[i][j]=2;
			}
		}
	}
	int i=n-1,j=n-1;
	if(ans>min(a[i][j],b[i][j])){
		ans=min(a[i][j],b[i][j]);
		pat="";
		if(b[i][j]<a[i][j]) swap(dir2,dir5);
		while(dir2[i][j]){
			if(dir2[i][j]==1) pat="R"+pat,j--;
			else pat="D"+pat,i--;
		}
	}
	cout<<ans<<"\n"<<pat;
}