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

vector<vector<int>> ans;
char g[110][110];

int c(int x,int y){
	int s=0;
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='1') s++;
	return s;
}



void three(int x,int y){
	vector<int> v;
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='1') {
		v.pb(i);
		v.pb(j);
		g[i][j]='0';	
	}
	ans.pb(v);
}

void two(int x,int y){
	vector<int> v;
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='0') {
		v.pb(i);
		v.pb(j);	
	}
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='1') {
		if(v.size()==6) break;
		v.pb(i);
		v.pb(j);
		g[i][j]='0';
	}
	for(int i=0;i<4;i+=2) g[v[i]][v[i+1]]='1';
	ans.pb(v);
	three(x,y);
}

void one(int x,int y){
	vector<int> v;
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='0') {
		if(v.size()==4) break;
		v.pb(i);
		v.pb(j);
			
	}
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='1') {
		v.pb(i);
		v.pb(j);
		g[i][j]='0';	
	}
	for(int i=0;i<4;i+=2) g[v[i]][v[i+1]]='1';
	ans.pb(v);
	two(x,y);
}

void four(int x,int y){
	vector<int> v;
	rep(i,x,x+2) rep(j,y,y+2) if(g[i][j]=='1') {
		if(v.size()==6) break;	v.pb(i);
		v.pb(j);
		g[i][j]='0';
		
	}
	ans.pb(v);
	one(x,y);
}

void solve() {
	int m,n;
	cin>>m>>n;
	ans.resize(0);
	rep(i,0,m) rep(j,0,n) cin>>g[i][j];
	rep(i,0,m-1) rep(j,0,n-1){
		int s=c(i,j);
		if(s==0) continue;
		else if(s==1) one(i,j);
		else if(s==2) two(i,j);
		else if(s==3) three(i,j);
		else if(s==4) four(i,j);
	}
	cout<<ans.size()<<"\n";
	for(auto v:ans){
		for(int i:v) cout<<i+1<<" ";
		cout<<"\n";
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



