#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define endl		"\n"
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	map<int,vector<int>> m;
	int v[26]={},p,ans=0;
	rep(i,0,26) cin>>v[i];
	string s;
	cin>>s;
	rep(i,0,s.size()-1){
		p+=v[s[i]-'a'];
		if(m[p].size()==0) m[p].resize(26);
		m[p][s[i]-'a']++;
		ans+=m[p][s[i+1]-'a'];
	}
	cout<<ans;
}




