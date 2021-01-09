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
 
struct p{
	int h,w,i;
	operator <(p b){
		if(h==b.h) return w>b.w;
		return h<b.h;
	}
};
 
void solve() {
	int n,x,y,b=0;
	cin>>n;
	p a[n];
	rep(i,0,n)	{
		cin>>x>>y;
		if(x>y) swap(x,y);
		a[i]={x,y,i};
	}
	sort(a,a+n);
	int ans[n],mnw=a[0].w,mni;
	rep(i,0,n) ans[i]=-2;
	rep(i,0,n){
		if(mnw<a[i].w) ans[a[i].i]=mni;
		else mnw=a[i].w,mni=a[i].i;
	}
	rep(i,0,n) cout<<ans[i]+1<<" ";cout<<"\n";
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}