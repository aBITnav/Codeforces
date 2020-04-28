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
	int n,x,mx=0,s;
	cin >> n;
	vector<int> a(n);
	map<int,int> dp;
	for(int i=0;i<n;i++){
		cin>>x;
		a[i]=x;
		dp[x]=max(dp[x],dp[x-1]+1);
	}
	for(auto i:dp)
		if(i.se>mx) mx=i.se, s=i.fi;
	cout<<mx<<endl;
	//cout<<s<<endl;
	s=s-mx+1;
	for(int i=0;i<n;i++){
		if(a[i]==s){
			cout<<i+1<<" ";
			s++;
		}
	}
 
	
	return 0;
}
 