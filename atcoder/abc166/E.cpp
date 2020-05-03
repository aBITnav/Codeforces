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
	int n,c=0,p;
	cin>>n;
	map<int,int> mp;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[i-a[i]]++;	
	} 
	for(int i=0;i<n-1;i++){
		p=a[i]+i;
		mp[i-a[i]]--;
		c+=max((mp[p]),0ll);
		
		//mp[p]--;
	}
	cout<<c;
	
	return 0;
}


