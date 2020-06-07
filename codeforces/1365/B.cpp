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
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,t=1,i,j,k,sum=0,ans,x,y;
	cin>>t;
	while(t--){
		//vector<int> v;map<int,int> mp;set<int> st;
		cin>>n;
		int a[n];
		set<int> r;
		rep(i,n) 
			cin>>a[i];
		rep(i,n) {
			cin>>x;
			r.insert(x);
		}
		if(r.size()>1) cout<<"Yes\n";
		else{
			int f=0;
			for(int i=1;i<n;i++) if(a[i]<a[i-1]) f=1;
			if(f) cout<<"No\n";
			else cout<<"Yes\n";
		}

	}
	return 0;
}


