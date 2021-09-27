#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define endl		"\n"
const int M=1e9+7,N=33000;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> primes;
int comp[N]={};

int nump(int a){
	int c=0;
	for(int i:primes){
		while(a%i==0){
			a/=i;
			c++;
		}
		if(a==1) return c;
	}
	return c+1;
}

void solve() {
	int a,b,k;
	cin>>a>>b>>k;
	if(a==b and k==1){
		cout<<"NO"<<endl;
		return;
	} 
	int c=nump(a)+nump(b);
	int mn=2;
	if(a%b==0 or b%a==0) mn=1;
	if(k>=mn and k<=c) 
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	for(int i=2;i<N;i++){
		if(!comp[i]){
			for(int j=i*i;j<N;j+=i) comp[j]=1;
			primes.pb(i);
		}
	}
	cin>>t;
	while(t--) solve();
	return 0;
}





