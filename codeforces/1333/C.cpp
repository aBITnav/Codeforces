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
	int n,c=0,sum=0,x,q=-1;
	map<int,int> m;
	m[0]=0;
	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>x;
		sum+=x;
		if(m.count(sum)) q=max(q,m[sum]);
		c+=i-q-1;
		m[sum]=i;	
	}  
	cout<<c;
	return 0;
}


