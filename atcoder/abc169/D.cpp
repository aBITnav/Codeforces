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
	int a[100];
	for(int i=0;i<100;i++){
		a[i]=((i+1)*(i+2))/2;
	}
	int n,t;
	cin>>n;
	t=n;
	map<int,int> mp;
	for(int i=2;i*i<=t;i++){
		while(n%i==0){
			n/=i;
			mp[i]++;
		}
	}
	if(n>1) mp[n]++;
	int ans=0;
	for(auto i:mp){
		ans+=(upper_bound(a,a+100,i.second)-a);
	}
	cout<<ans;
}


