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
	int q,n,b,t,m;
	cin>>q;
	while(q--){
		map<char,int> cost;
		cin>>b>>t>>m;
		cost['A']=b;cost['B']=t;
		string s;
		cin>>s;
		n=s.size();
		int i;
		s[n-1]='a';
		for(i=n-2;i>=0;i--){
			if(s[i]!=s[i+1]) m-=cost[s[i]];
			if(m<0) break;
		}
		cout<<i+2<<endl;
		
	}
	
	return 0;
}
 