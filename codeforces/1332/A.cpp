#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
	fast;
	int a,b,c,d,x1,x2,y1,y2,x,y,t;
	cin>>t;
	while(t--){	
		cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
		int x0=x+b-a,y0=y+d-c;
		if((x0==x1 && x0==x2 && (a!=0 || b!=0)) || (y0==y1 && y0==y2 && (c!=0 || d!=0)))
			cout<<"NO"<<endl;
		else if(!(x0>=x1 && x0<=x2))
			cout<<"NO"<<endl;
		else if(y0<y1 || y0>y2)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	return 0;
}

