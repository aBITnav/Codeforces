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
int M=1e9+7,N=205001;
 
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
 
 
 
void solve() {
	int n,c=1;
	cin>>n;
	string s;
	cin>>s;
	s+='#';
	vector<int> v;
	rep(i,1,n+1){
		if(s[i]!=s[i-1]){
			v.pb(c);c=1;
		}
		else c++;
	}
	int ans=0;
	n=v.size();
	if(n==1){
		cout<<"1\n";return;
	}
	for(int i=0,j=0;i<n;i++,ans++){
		if(v[i]>1) {
			j++;	
			continue;
		}
		while(j<n and v[j]==1) j++;
		if(j==n) {
			ans+=(j-i+1)/2;
			break;
		}
		v[j]--;
		
	}
	cout<<ans<<"\n";
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}