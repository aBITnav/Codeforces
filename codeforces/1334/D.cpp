#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=105001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



int calc(vector<int>& a,int x){
	//if(x==a.size()*(a.size()-1)+1) return 1;
	int i=lower_bound(all(a),x)-a.begin();
	if(i>=a.size()) return 1;
	if((x-a[i-1])%2) return i;
	return (x-a[i-1])/2+i;
}

void solve() {
	int n,l,r,x;
	cin>>n>>l>>r;
	vector<int> a(n);
	for(int i=1,d=2*n;i<n;i++) {
		d-=2;
		a[i]=a[i-1]+d;
	}
	rep(i,l,r+1) cout<<calc(a,i)<<" ";
	cout<<"\n";
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




