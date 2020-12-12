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

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y;
	cin>>n;
	string s,t;
	cin>>s>>t;
	vector<int> ab,ba;
	rep(i,0,n) {
		if(s[i]=='a' and t[i]=='b') ab.pb(i);
		else if(s[i]=='b' and t[i]=='a') ba.pb(i);
	}
	if(ba.size()>ab.size()) swap(ab,ba);
	if((ab.size()+ba.size())%2){
		cout<<-1;return 0;
	}
	vector<pair<int,int>> ans;
	if(ab.size()%2){
		x=ab.back();
		y=ba.back();
		ab.pop_back();
		ba.pop_back();
		ans.pb({x,x});
		ans.pb({x,y});
	}
	for(int i=0;i<ab.size();i+=2) ans.pb({ab[i],ab[i+1]});
	for(int i=0;i<ba.size();i+=2) ans.pb({ba[i],ba[i+1]});
	
	cout<<ans.size()<<"\n";
	for(auto i:ans) cout<<i.fi+1<<" "<<i.se+1<<"\n";
}



