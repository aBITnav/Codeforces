#include <bits/stdc++.h>
using namespace std;
#define int long long

int M=1e9+7;

int mm(int a,int b){
	a%=M;
	b%=M;
	return (a*b)%M;
}
signed main() {
	
	int n,c,ans=1;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>c;
		v.push_back(c);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		c=v[i]-i;
		if(c<0) c=0;
		ans=mm(ans,c);
		
	}
	cout<<ans;
	
}