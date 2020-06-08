#include<bits/stdc++.h>
using namespace std;
//#define int long long
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
	int n,m,t=1,i,j,k,sum=0,ans,f=0,x,y;
	cin>>t;
	while(t--){
		int a[3],b,c=0,p=0,q=0,r=0;
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		int g[7][3]={{0,0,1},{0,1,0},{0,1,1},{1,0,0},{1,0,1},{1,1,0},{1,1,1}};
		for(int i=0;i<8;i++){
			if(g[i][0]<=a[0] and g[i][1]<=a[1] and g[i][2]<=a[2]){
				c++;
				a[0]=a[0]-g[i][0];
				a[1]=a[1]-g[i][1];
				a[2]=a[2]-g[i][2];
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}


