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
int M=1e9+7,N=2005001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

void update(int bit[],int n,int i,int x){
	for(;i<=n;i+=i&-i) bit[i]+=x;
}

int query(int bit[],int i){
	int s=0;
	for(;i>0;i-=i&-i) s+=bit[i];
	return s;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,ans=0;
	cin>>n;
	int a[n],b[n];
	rep(i,0,n) {
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	unordered_map<int,int> m;
	rep(i,0,n) m[b[i]]=i+1;
	int bit[n+1]={},l[n]={},r[n]={};
	
	rep(i,0,n) {
		
		l[i]=i-query(bit,m[a[i]]);
		update(bit,n,m[a[i]],1);
	}
	memset(bit,0,sizeof(bit));
	rep(i,n-1,-1){
		update(bit,n,m[a[i]],1);
		r[i]=query(bit,m[a[i]]-1);
		ans+=l[i]*r[i];
	}
	cout<<ans;
	
	
	return 0;
}



