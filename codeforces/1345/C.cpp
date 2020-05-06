#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


signed main(){
	int t,n,k,i,x,m;
	cin>>t;
	while(t--){
		string ans="YES\n";
		cin>>n;
		int a[n],r[n]={};
		for(int i=0;i<n;i++){
			cin>>x;
			r[((i+x)%n+n)%n]++;
		}
		for(int i=0;i<n;i++)
			if(r[i]!=1){
				ans="NO\n";break;
			}
		cout<<ans;
		
	}
}


