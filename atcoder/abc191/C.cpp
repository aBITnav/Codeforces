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

int cal(vector<string> &c){
	int h=c.size(),w=c[0].size(),ans=0;
	set<int> pl,pr;
	rep(i,0,h){
		rep(j,1,w) if(c[i][j]=='#' and c[i][j-1]=='.' and !pl.count(j))
			ans++;
		rep(j,0,w-1) if(c[i][j]=='#' and c[i][j+1]=='.' and !pr.count(j))
			ans++;
		pl.clear(),pr.clear();
		rep(j,1,w) if(c[i][j]=='#' and c[i][j-1]=='.') pl.insert(j);
		rep(j,0,w-1) if(c[i][j]=='#' and c[i][j+1]=='.') pr.insert(j);
	}
	return ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int h,w;
	cin>>h>>w;
	vector<string> c(h,string(w,'p'));
	vector<string> t(w,string(h,'p'));
	
	rep(i,0,h) rep(j,0,w) {
		cin>>c[i][j];
		t[j][i]=c[i][j];	
	}
	cout<<cal(c)+cal(t);
	
	
}



