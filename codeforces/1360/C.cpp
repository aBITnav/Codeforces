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
	int n,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y;
	cin>>t;
	while(t--){
		//vector<int> v;map<int,int> mp;set<int> st;
		cin>>n;
		string ans="NO\n";
		int a[n];
		vector<int> o,e;
		rep(i,n) {
			cin>>a[i];
			if(a[i]%2) o.pb(a[i]);
			else e.pb(a[i]);
		}
		sort(all(e));
		if(e.size()%2==0 and o.size()%2==0) ans="YES\n";
		else if(e.size()%2==1 and o.size()%2==1){
			for(int i:o){
				if(binary_search(all(e),i+1)) ans="YES\n";
				if(binary_search(all(e),i-1)) ans="YES\n";
			}
		}
		cout<<ans;
		
		
	}
	return 0;
}


