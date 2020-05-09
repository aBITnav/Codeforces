#include<bits/stdc++.h>
using namespace std;
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
	int n,t=1,i,j,x,a,b,c;
	cin>>t;
	int dp[1020]={2,4,1,3};
	for(int i=4;i<1020;i++) dp[i]=dp[i-4]+4;
	while(t--){
		cin>>n;
		if(n<4) cout<<-1<<endl;
		else{
			vector<int> v;
			for(int i=0;i<n+4;i++)
				if(dp[i]<=n) v.pb(dp[i]);
				int l=v.size();
			if(n%4==2) swap(v[l-2],v[l-4]);
			if(n%4==3) swap(v[l-1],v[l-3]),swap(v[l-2],v[l-4]);
			for(int i:v) cout<<i<<" ";
		cout<<endl;
		}
	}
	return 0;
}


