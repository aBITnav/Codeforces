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
const int M=1e9+7,N=305001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int a[N],n;

bool chk(int i){
	return (i>0 and i<n-1 and ((a[i]>a[i+1] and a[i]>a[i-1]) or (a[i]<a[i+1] and a[i]<a[i-1])));
}
 
void solve() {
	int ans=0,sum=0;
	cin>>n;
	int b[n]={};
	rep(i,0,n) cin>>a[i];
	for(int i=1;i<n-1;i++)
		if(chk(i)) b[i]=1,sum++,ans++;
	for(int i=1;i<n-1;i++){
		int t=a[i];
		a[i]=a[i-1];
		int c=sum-b[i-1]-b[i]-b[i+1];
		ans=min(ans,c+chk(i-1)+chk(i)+chk(i+1));
		a[i]=a[i+1];
		ans=min(ans,c+chk(i-1)+chk(i)+chk(i+1));
		a[i]=t;
	}
	cout<<ans<<"\n";
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}