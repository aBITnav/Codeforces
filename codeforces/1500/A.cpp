#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=5000005;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

vector<int> f[N];

void solve() {
	int n,x,p=-1;
	cin>>n;
	map<int,vector<int>> m;
	rep(i,1,n+1){
		cin>>x;
		m[x].pb(i);
		if(m[x].size()==4){
			cout<<"YES"<<endl;
			for(int j:m[x]) cout<<j<<" ";
			return;
		}
		if(m[x].size()>=2){
			if(p==-1) p=x;
			else if(x!=p){
				cout<<"YES"<<endl;
				cout<<m[p][0]<<" "<<m[x][0]<<" "<<m[p][1]<<" "<<m[x][1];
				return;
			}
		}
	}
	vector<pii> v;
	for(auto i:m) v.pb({i.fi,i.se[0]});
	n=v.size();
	for(int i=0;i<n;i++) for(int j=i+1;j<n;j++){
		int t=v[i].fi+v[j].fi;
		f[t].pb(v[i].se);
		f[t].pb(v[j].se);
		if(f[t].size()==4){
			cout<<"YES"<<endl;
			for(int k:f[t]) cout<<k<<" ";
			return;
		}
	}
	if(p!=-1 and f[2*p].size()>=2){
		cout<<"YES"<<endl;
		cout<<m[p][0]<<" "<<m[p][1]<<" "<<f[2*p][0]<<" "<<f[2*p][1];
		return;
	}
	cout<<"NO";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}