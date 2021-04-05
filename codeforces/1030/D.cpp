#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=100005;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,k,p;
	cin>>n>>m>>k;
	set<int> s;
	if((2*n*m)%k){
		cout<<"NO";
		return 0;
	}
	for(int i=1;i*i<=k;i++) if(k%i==0){
		s.insert(i);
		s.insert(k/i);
	}
	for(int f1:s){
		int f2=k/f1;
		if(f1!=1 and (2*m)%f1==0 and n%f2==0){
			int a=(2*m)/f1;
			int b=n/f2;
			cout<<"YES"<<endl<<"0 0"<<endl<<"0 "<<a<<endl<<b<<" 0";
			return 0;
		}
		if(f2!=1 and m%f1==0 and (2*n)%f2==0){
			int a=m/f1;
			int b=(2*n)/f2;
			cout<<"YES"<<endl<<"0 0"<<endl<<"0 "<<a<<endl<<b<<" 0";
			return 0;
		}
	}
	cout<<"NO";
}