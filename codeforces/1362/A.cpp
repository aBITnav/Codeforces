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
	int n,m,t;
	cin>>t;
	int po[64]={1};
	for(int i=1;i<64;i++) po[i]=po[i-1]*2; 
	while(t--){
		//vector<int> v;map<int,int> mp;set<int> st;
		cin>>n>>m;
		int mx=max(m,n);
		int mn=min(m,n);
		if(mx%mn!=0) cout<<"-1\n";
		else{
			int b=mx/mn;
			int p=-1;
			for(int i=0;i<64;i++) if(b==po[i]){
			p=i;break;}
			if(p==-1) cout<<"-1\n";
			else{
				int a=p/3;//+p%3;
				p%=3;a+=p/2;a+=p%2;
				cout<<a<<endl;
			}
		}
		//int a[n];rep(i,n) cin>>a[i];

	}
	return 0;
}


