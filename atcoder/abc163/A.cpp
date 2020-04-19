//Author: Abitnav
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
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y;
	//cin>>t;
	while(t--){
		//vector<int> v;map<int,int> mp;set<int> st;
		cin>>n;
		double pi=3.1415926535;
		double ans=2*(pi*n);
		printf("%0.15lf",ans);
		//int a[n];rep(i,n) cin>>a[i];

	}
	return 0;
}











