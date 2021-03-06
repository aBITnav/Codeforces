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
	int n,x,y,s=0;
	cin>>n;
	int w[n+1];
	vector<int> deg(n+1,-1);
	rep(i,1,n+1) {
		cin>>w[i];
		s+=w[i];	
	}
	rep(i,1,n){
		cin>>x>>y;
		deg[x]++;deg[y]++;
	}
	priority_queue<pair<int,int>> q;
	rep(i,1,n+1){
		if(deg[i]>0) q.push({w[i],deg[i]});
	}
	cout<<s<<" ";
	while(!q.empty()){
		pair<int,int> p=q.top();
		q.pop();
		s+=(p.fi);
		cout<<s<<" ";
		p.se--;
		if(p.se) q.push(p);
	}
	cout<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}



