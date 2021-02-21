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
const int M=1e9+7,N=205001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,t=0,s=0,pos=0,neg=0;
	cin>>n;
	int a[n];
	rep(i,0,n)	cin>>a[i];
	sort(a,a+n);
	if(n==1) {
		cout<<-1;
		return 0;
	}
	if(n==2){
		int d=a[1]-a[0];
		if(d==0)
			cout<<"1\n"<<a[0];
		else if(d%2)
			cout<<"2\n"<<a[0]-d<<" "<<a[1]+d;
		else
			cout<<"3\n"<<a[0]-d<<" "<<a[0]+d/2<<" "<<a[1]+d;
		return 0;
	}
	map<int,int> m;
	rep(i,1,n) m[a[i]-a[i-1]]++;
	if(m.size()==1){
		int d=a[1]-a[0];
		if(d==0)
			cout<<"1\n"<<a[0];
		else
			cout<<"2\n"<<a[0]-d<<" "<<a[n-1]+d;
		return 0;
	}
	if(m.size()==2){
		int d=1e9;
		rep(i,1,n) d=min(d,abs(a[i]-a[i-1]));
		if(m[d]==n-2 and m[2*d]==1 and d){
			int c;
			rep(i,1,n) if(a[i]-a[i-1]==2*d){
				c=i-1;break;
			}
			cout<<"1\n"<<a[c]+d;
			return 0;
		}
	}
	
	cout<<0;
}