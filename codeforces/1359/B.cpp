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
	int n,m,c=0,t=1,i,j,k,sum=0,f=0,x,y;
	cin>>t;
	while(t--){
		//vector<int> v;map<int,int> mp;set<int> st;
		cin>>n>>m>>x>>y;
		string s;
		int ans=0;
		y=min(y,2*x);
		while(n--){
			cin>>s;
			vector<int> v;
			v.pb(0);
			for(int i=0;i<m;i++){
				if(s[i]=='*') v.pb(i+1);
			}
			v.pb(m+1);
			for(int i=1;i<v.size();i++){
				int d=v[i]-v[i-1]-1;
				ans+=(d/2)*y+(d%2)*x;
			}
			
		}
		cout<<ans<<endl;
		//int a[n];rep(i,n) cin>>a[i];

	}
	return 0;
}


