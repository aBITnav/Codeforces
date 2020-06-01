#include<bits/stdc++.h>
using namespace std;

int n,k;

int solve(string s,char c){
	int mx=0,b=0;
	int j=-1;
	for(int i=0;i<n;i++){
		if(s[i]==c) b++;
		while(j<=i and b>k){
			j++;
			if(s[j]==c) b--;
		}
		mx=max(mx,i-j);
	}
	return mx;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	cin>>n>>k>>s;
	//if(n==k) cout<<n;
	//else
	cout<<max(solve(s,'a'),solve(s,'b'));
}


