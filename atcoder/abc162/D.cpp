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
		vector<int> r,g;
		set<int> b;
		
		int n,l=0;cin>>n;
		int ans=0;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='R') r.pb(i);
			else if(s[i]=='G') g.pb(i);
			else if(s[i]=='B') {
				l++;b.insert(i);
			}
		}
		for(int i:r) for(int j:g) {
			ans+=l;
			if(b.find(2*i-j)!=b.end()) ans--;
			if(b.find(2*j-i)!=b.end()) ans--;
			if((i+j)%2==0 and b.find((i+j)/2)!=b.end()) ans--;
		}
		
		//int a[n];rep(i,n) cin>>a[i];
		cout<<ans;
	return 0;
}


