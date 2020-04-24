#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

void solve(int n){
	set<int> s;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)	s.insert(i),s.insert(n/i);
	s.insert(n);
	vector<int> v(s.begin(),s.end());
	for(int i=0;i<v.size();i++)
		for(int j=i+1;j<v.size();j++)
			if(binary_search(v.begin()+j+1,v.end(),n/v[i]/v[j])){
				cout<<"YES\n"<<v[i]<<" "<<v[j]<<" "<<n/v[i]/v[j]<<endl;
				return;
			}
	cout<<"NO\n";
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		solve(n);
	}
	return 0;
}


