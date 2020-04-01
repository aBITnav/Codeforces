#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
	fast;
	int n,k,t=1;
	cin>>t;
	while(t--){
		string s;
		cin>>n>>k>>s;
		vector<string> a;
		int ans=0;
		for(int i=0;i<n;i+=k) a.push_back(s.substr(i,k));
		//for(string i:a) cout<<i<<endl;
		for(int j=0,o=k-1;j<k/2;j++,o--){
			int mx=0;
			unordered_map<char,int> mp;
			for(int i=0;i<a.size();i++)
				mp[a[i][j]]++,mp[a[i][o]]++;
			for(auto p:mp) mx=max(mx,p.se);
			ans+=(2*a.size()-mx);
			
		}
		if(k%2){
			int mx=0;
			unordered_map<char,int> mp;
			for(int i=0;i<a.size();i++)
				mp[a[i][k/2]]++;
			for(auto i:mp) mx=max(mx,i.se);
			ans+=(a.size()-mx);	
		}
			   
		cout<<ans<<endl;

	}
	return 0;
}

