#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int n;

void tr(int& l){
	if(l<n) l+=n;
	else l-=n;
}

void solve() {
	int q,l,r,t,f=0;
	string s;
	cin>>n>>s>>q;
	while(q--){
		cin>>t>>l>>r;
		l--;r--;
		if(t==2) f=(f+1)%2;
		else{
			if(f) tr(l),tr(r);
			swap(s[l],s[r]);
		}
	}
	if(f) s=s.substr(n)+s.substr(0,n);
	cout<<s;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




