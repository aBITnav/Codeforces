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

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,ans=0;
	cin>>a>>b;
	rep(i,2,64){
		int x=(1ll<<i)-1;
		rep(j,0,i-1){
			int y=x-(1ll<<j);
			if(y>=a and y<=b) ans++;
		}
	}
	cout<<ans;	
}



