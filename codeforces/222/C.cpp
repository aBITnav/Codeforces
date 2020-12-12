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
const int M=1e9+7,N=1e7+5;

int spf[N];

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	rep(i,0,N) spf[i]=i;
	for(int i=2;i*i<N;i++)	if(spf[i]==i) 
		for(int j=i*i;j<N;j+=i) if(spf[j]==j) spf[j]=i;	
	vector<int> num,den;
	map<int,int> mpn,mpd;
	int m,n,x;
	cin>>m>>n;
	while(m--){
		cin>>x;
		num.pb(x);
		while(x!=1){
			mpn[spf[x]]++;
			x/=spf[x];
		}
	}
	while(n--){
		cin>>x;
		den.pb(x);
		while(x!=1){
			if(mpn[spf[x]]) {
				mpn[spf[x]]--;
				den[den.size()-1]/=spf[x];
			}
			mpd[spf[x]]++;
			x/=spf[x];
		}
	}
	for(int &i:num){
		x=i;
		while(x!=1){
			if(mpd[spf[x]]) {
				mpd[spf[x]]--;
				i/=spf[x];
			}
			x/=spf[x];
		}
	}
	cout<<num.size()<<" "<<den.size()<<"\n";
	for(int i:num) cout<<i<<" ";cout<<"\n";
	for(int i:den) cout<<i<<" ";cout<<"\n";
}



