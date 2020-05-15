#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first 
#define pi pair<int,int>
vector<int> seq(200005),ind(200005);

bool comp(int a,int b){
	return ind[a]<ind[b];
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,x,y,p;
	cin>>n;
	m=n-1;
	vector<int> g[n+1],d(n+1),vis(n+1);
	while(m--){
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	
	for(int i=0;i<n;i++){
		cin>>seq[i];
		ind[seq[i]]=i+1;
	}
	
	for(int i=1;i<=n;i++){
		sort(all(g[i]),comp);
		
		//cout<<i<<" -> ";for(int j:g[i]) cout<<j<<" ";cout<<endl;
	}
	string ans="Yes";
	queue<int> q;
	q.push(1);
	vis[1]=d[1]=1;
	int t=0;
	while(!q.empty()){
		p=q.front();
		if(p!=seq[t++]) ans="No"; 
		q.pop();
		for(int i:g[p])	if(!vis[i]){
			vis[i]=1;
			d[i]=d[p]+1;
			q.push(i);
		}
	}
	
	
	cout<<ans;
}


