#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

string dig[10]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

int req(string t,int d){
	string s=dig[d];
	int count=0;
	rep(i,0,7){
		if(t[i]=='1' and s[i]=='0') return 1e9;
		count+=(t[i]=='0' and s[i]=='1'); 
	}
	return count;
}
bool first=true;
vector<string> v;
vector<int> pp;
int dp[2010][2010];

bool solve(int i,int k,vector<int>& ans){
	if(k<0) return false;
	if(i==v.size()){
		if(k==0 and first){
			pp=ans;
			first=false;
		}
		return k==0;
	}
	if(dp[i][k]!=-1) return dp[i][k];
	bool res=false;
	for(int j=9;j>-1;j--){
		ans.pb(j);
		int r=req(v[i],j);
		res|=solve(i+1,k-r,ans);
		ans.pop_back();
	}
	return dp[i][k]=res;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	string s;
	cin>>n>>k;
	memset(dp,-1,sizeof(dp));
	rep(i,0,n){
		cin>>s;
		v.pb(s);
	}
	vector<int> ans;
	if(solve(0,k,ans)){
		for(int i:pp) cout<<i;
	}
	else cout<<-1;
}