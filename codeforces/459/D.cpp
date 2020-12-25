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
const int M=1e9+7,N=1050001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int bit[N]={};
void update(int i,int x){
	for(;i<N;i+=i&-i) bit[i]+=x;
}
int query(int i){
	int s=0;
	for(;i>0;i-=i&-i) s+=bit[i];
	return s; 
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,ans=0,x;
	cin>>n;
	int a[n],l[n],r[n];
	map<int,int> fl,fr;
	rep(i,0,n){
		cin>>a[i];
		fl[a[i]]++;
		l[i]=fl[a[i]];
	}
	rep(i,n-1,-1){
		fr[a[i]]++;
		ans+=query(l[i]-1);
		update(fr[a[i]],1);
	}
	cout<<ans;
	
	return 0;
}



