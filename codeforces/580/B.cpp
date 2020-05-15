#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pi pair<int,int>

int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,k,x,y;
	cin>>n>>k;
	vector<pair<int,int> > p;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		p.pb({x,y});
	}
	sort(all(p));
	int s=0,mx=0;
	for(int i=0,j=0;i<n;i++){
		s+=p[i].se;
		while(p[i].fi-p[j].fi>=k){
			s-=p[j].se;
			j++;
		}
		mx=max(mx,s);
	}
	cout<<mx;
	return 0;
}


