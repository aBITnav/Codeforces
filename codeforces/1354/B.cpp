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
	string s;
	int n,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y,a,b,d,l=1e9;
	cin>>t;
	while(t--){
		cin>>s;
		vector<int> v;
		int mn=l;
		int dp[4]={l,l,l,l};
		for(int i=0;i<s.size();i++){
			dp[s[i]-'0']=i;
			x=max({dp[1],dp[2],dp[3]})-min({dp[1],dp[2],dp[3]});
			if(x>0) mn=min(mn,x);
		}
		if(mn>2*s.size()) mn=-1;
		cout<<mn+1<<endl;
	}
	return 0;
}


