#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=1005001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

string l,r;
set<int> c;
int f[N]={1},fi[N];

int ncr(int n,int r){
	return mm(f[n],mm(fi[r],fi[n-r]));
}

void init(string s,int i){
	if(i==7){
		if(s!="")
		c.insert(stoll(s));
		return;
	}
	init(s,i+1);
	init(s+l,i+1);
	init(s+r,i+1);
	
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,n,x,ans=0;
	rep(i,1,N) f[i]=mm(f[i-1],i);
	rep(i,0,N) fi[i]=po(f[i],M-2);
	cin>>a>>b>>n;
	l=to_string(a),r=to_string(b);
	init("",0);
	for(int i:c) {
		if((i-n*b)%(a-b)==0){
			x=(i-n*b)/(a-b);
			if(x>=0 and x<=n) ans=(ans+ncr(n,x))%M;
		}
	}
	cout<<ans;
}




