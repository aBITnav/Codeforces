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
	//
	int n,a,b,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y;
	cin>>t;
	while(t--){
		cin>>n;
		map<int,int> mp;set<int> st;
		int a[n],f=0;rep(i,n) {
			cin>>a[i];
			st.insert(a[i]);
			mp[a[i]]++;
		}
		for(auto i:mp){
			f=max(f,i.se);
		}
		int u=st.size();
		cout<<max(min(u,f-1),min(u-1,f))<<endl;
	}
	return 0;
}


