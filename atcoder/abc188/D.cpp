#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



void solve() {
	int n,c,l,r,x,s=0,f;
	cin>>n>>c;
	map<int,int> p;
	rep(i,0,n){
		cin>>l>>r>>x;
		p[l]+=x;
		p[r+1]-=x;
	}
	vector<pair<int,int>> v(all(p));
	for(int i=1;i<v.size();i++) 
		v[i].se+=v[i-1].se;
	for(int i=0;i<v.size();i++) 
		v[i].se=min(v[i].se,c);
	for(int i=0;i<v.size()-1;i++){
		f=v[i+1].fi-v[i].fi;
		s+=v[i].se*f;
	}
	
	//for(auto i:v) cout<<i.fi<<" "<<i.se<<"\n\n";
	cout<<s;
	
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



