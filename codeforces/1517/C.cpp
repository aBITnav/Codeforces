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

const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M




signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,d,x,y;
	cin>>n;
	int a[n][n];
	memset(a,0,sizeof(a));
	rep(i,0,n) cin>>a[i][i];
	rep(i,0,n){
		k=a[i][i],d=a[i][i]-1,y=i-1,x=i;
		while(d>0){
			while(d>0 and y>=0 and !a[x][y]){
				a[x][y]=k;
				d--;
				y--;
			}
			x++;y++;
		}
		rep(j,0,i+1) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}




