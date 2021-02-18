#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=20020;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


vector<int> A[N];
void fac(){
	rep(n,1,N){
		for(int i=1;i*i<=n;i++)
		if(n%i==0) {
			if(n/i==i) A[n].pb(i);
			else A[n].pb(i),A[n].pb(n/i);
		}
		sort(all(A[n]));
	}
}

void solve() {
	int a,b,c,ans=1e9,x,y,z;
	cin>>a>>b>>c;
	rep(i,1,2*b+2){
		int r=*lower_bound(all(A[i]),a);
		int l=*(upper_bound(all(A[i]),a)-1);	
		int cost=min(abs(r-a),abs(a-l))+abs(i-b)+min(c%i,i-c%i);
		if(cost<ans){
			ans=cost;
			y=i;
			if(abs(r-a)<abs(a-l)) x=r;
			else x=l;
			if(c%i<i-c%i) z=c-c%i;
			else z=c+(i-c%i);
		}
	}
	cout<<ans<<"\n"<<x<<" "<<y<<" "<<z<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	fac();
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




