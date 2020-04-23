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

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,c=0,t=1,i,j,k,sum=0,ans,f=0,x,y;
	cin>>t;
	while(t--){
		//vector<int> v;set<int> st;
		map<int,int> mp;
		cin>>n>>k;
		ans=0;
		int a[n],mn,mx,x=0,xi;
		rep(i,n) cin>>a[i];
		int s[2*k+5]={},pre[2*k+5]={};
		for(int i=0;i<n/2;i++){
			mp[a[i]+a[n-i-1]]++;
			mn=min(a[i],a[n-i-1])+1;
			mx=max(a[i],a[n-i-1])+k;
			s[mn]+=1;
			s[mx+1]-=1;
		}
		for(int i=1;i<=2*k+1;i++){
			s[i]+=s[i-1];	
		} 
		mn=n;
		for(int i=1;i<=2*k+1;i++){
			s[i]=n-mp[i]-s[i];
			mn=min(mn,s[i]);
		}
		/*for(auto i:mp) s[i.fi]+=i.se;
		for(int i=1;i<=2*k+1;i++){
			if(s[i]>x) {
				x=s[i];
				xi=i;
			}
		}
		for(int i=0;i<n/2;i++){
			if(a[i]+a[n-i-1]==xi) continue;
			else if(xi>=min(a[i],a[n-i-1])+1 and xi<=max(a[i],a[n-i-1])+k) ans++;
			else ans+=2;
		}*/
		cout<<mn<<endl;
		
	}
	return 0;
}


