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

void ro(int *a, int n) 
{ 
    int x = a[n - 1], i; 
    for (i = n - 1; i > 0; i--) 
    a[i] = a[i - 1];  
    a[0] = x; 
} 

int ma(int *a,int *b,int n){
	int ans=0;
	for(int i=0;i<n;i++) if(a[i]==b[i]) ans++;
	return ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,t=1,i,j,k,sum=0,ans,x,y;
	//cin>>t;
	while(t--){
		//vector<int> v;
		map<int,int> mp,f;
		//set<int> st;
		cin>>n;
		
		int a[n],b[n];
		rep(i,n) {
			cin>>x;
			mp[x]=i+1;
		}
			
		for(int i=1;i<=n;i++) {
			cin>>x;
			int d=(i-mp[x]+n)%n;
			f[d]++;
		}
		int mx=0;
		for(auto i:f) mx=max(mx,i.se);
		cout<<mx;
	}
	return 0;
}


