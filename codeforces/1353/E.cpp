#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int kad(vector<int>& a){
	int n=a.size(),mx=0;
	vector<int> dp(n+1);
	for(int i=0;i<n;i++){
		dp[i+1]=max({dp[i]+a[i],a[i],0ll});
		mx=max(mx,dp[i+1]);
	}
	return mx;
}

void solve() {
	int n,k,sum=0,mn=1e9;
	string s;
	cin>>n>>k>>s;
	vector<int> v[k];
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			v[i%k].pb(1);
			sum++;
		}
		else v[i%k].pb(-1);
	}
	for(auto& i:v){
		//for(int j:i) cout<<j<<"  ";cout<<endl;cout<<"KADAN => "<<kad(i);cout<<endl;
		mn=min(mn,sum-kad(i));
	}
	cout<<mn<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




