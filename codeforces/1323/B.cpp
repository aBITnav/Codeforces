#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
signed main(){
	fast;
	int m,n,k,c=0,ans=0;
	set<int> s;
	cin>>m>>n>>k;
	for(int i=1;i*i<=k;i++) if(k%i==0) s.insert(i),s.insert(k/i);
	vector<int> f(all(s));
	//for(int i:f) cout<<i<<" "<<k/i<<endl;
	int a[m+1]={},b[n+1]={};
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	unordered_map<int,int> h,v;
	for(int i=0,c=0;i<=m;i++)
	    if(a[i]) c++;
	    else h[c]++,c=0;
	for(int i=0,c=0;i<=n;i++)
	    if(b[i]) c++;
	    else v[c]++,c=0;
	h.erase(0);v.erase(0);
	for(auto i:h)
		for(auto j:v)
			for(auto p:f){
				if(i.fi>=k/p and j.fi>=p){
				int sum=(i.fi-k/p+1)*(j.fi-p+1)*i.se*j.se;
				if(sum>0) ans+=sum;}
				
				}
	
//	for(auto i:h) cout<<i.fi<<" "<<i.se<<endl<<endl;
//	for(auto i:v) cout<<i.fi<<" "<<i.se<<endl<<endl;
	cout<<ans;
	
	return 0;
}