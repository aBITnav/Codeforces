#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define endl		"\n"
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



void solve() {
	int n,q,c,x,y;
	cin>>n>>q;
	vector<int> par(n+1,-1);
	vector<int> child(n+1,-1);
	while(q--){
		cin>>c;
		if(c==1){
			cin>>x>>y;
			par[y]=x;
			child[x]=y;
		} else if(c==2){
			cin>>x>>y;
			par[y]=-1;
			child[x]=-1;
		} else {
			cin>>x;
			y=x;
			vector<int> res;
			while(par[x]!=-1){
				x=par[x];
				res.push_back(x);
			}
			reverse(res.begin(),res.end());
			while(y!=-1){
				res.pb(y);
				y=child[y];
			}
			cout<<res.size()<<" ";
			for(int i:res) cout<<i<<" ";
			cout<<endl;
		}
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}