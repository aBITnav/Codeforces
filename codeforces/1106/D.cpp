#include "bits/stdc++.h"
using namespace std;
 

bool vis[100001];
vector <int> adj[100001];
 
int main() {
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	int m,n;
	cin>>n>>m;
	while(m--) {
		int u, v;
		cin>>u>>v;
		if(u != v) {
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	set <int> st;
	vector <int> ans;
	st.insert(1);
	while(st.size() > 0) {
		int tp = (*st.begin());
		st.erase(st.begin());
		if(!vis[tp]) {
			ans.push_back(tp);
			vis[tp] = true;
			for(int x : adj[tp]) {
				if(!vis[x]) 
					st.insert(x);
				
			}}}
	for(int i :ans) cout<<i<<" ";
}