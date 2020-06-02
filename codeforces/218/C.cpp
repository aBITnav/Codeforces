#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> g[2010],vis(2010),sx(2010),sy(2010);
int n;

void dfs(int p){
	vis[p]=1;
	for(int i=0;i<n;i++)
		if((sx[i]==sx[p] or sy[i]==sy[p]) and !vis[i])
		dfs(i);
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x,y,p,ans=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sx[i]>>sy[i];
	}
	for(int i=0;i<n;i++){
		if(!vis[i]){
			dfs(i);ans++;
		}
	}
	cout<<ans;
}


