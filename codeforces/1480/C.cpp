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
	int n;
	cin>>n;
	int l=1,r=n,m,x;
	vector<int> a(n+2,-1);
	a[0]=a[n+1]=1e9;
	while(1){
		m=(l+r)/2;
		if(a[m]==-1){
			cout<<"? "<<m<<endl;
			cin>>a[m];
		}
		if(a[m-1]==-1){
			cout<<"? "<<m-1<<endl;
			cin>>a[m-1];
		}
		if(a[m+1]==-1){
			cout<<"? "<<m+1<<endl;
			cin>>a[m+1];
		}
		if(a[m-1]>a[m] and a[m+1]>a[m]) {
			cout<<"! "<<m<<endl;
			return 0;
		}
        else if(a[m+1]<a[m] and a[m]<a[m-1]) l=m+1;
        else r=m-1;
	}
}



