#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e18+7,N=205001;

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s,bad;
	int k;
	set<int> st;
	cin>>s>>bad>>k;
	rep(i,0,s.size()){
		int a=0,hash=0;
		rep(j,i,s.size()){
			a+=!(bad[s[j]-'a']-'0');
			if(a>k) break;
			hash=(hash*29+s[j]-'0')%M;
			st.insert(hash);
		}
	}
	cout<<st.size();
}



