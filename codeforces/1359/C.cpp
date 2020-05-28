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
	int n,m,c=0,T=1,i,j,k,sum=0,f=0,x,y;
	cin>>T;
	while(T--){
		//vector<int> v;;set<int> st;
		double h,c,t;
		cin>>h>>c>>t;
		int ans;
		if(t>=h) ans=1;
		else if(h+c>=2*t) ans=2;
		
		else{
			//n=h/(2*t-h-c);
			n=(t-h)/(h+c-2*t);	
			double d0=((n+1.0)*h+n*c)/(2*n+1);
			d0=d0-t;
			double d1=((n+2.0)*h+(n+1)*c)/(2*n+3);
			d1=t-d1;
			//cout<<d0<<" "<<d1<<endl<<endl;
			if(d0<=d1) ans=2*n+1;
			else ans=2*n+3;
		}
		cout<<ans<<endl;
		
		
	}
	return 0;
}


