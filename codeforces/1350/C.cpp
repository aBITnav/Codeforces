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
int lim=1e6+1e6;
int spf[2000001]={};
void sieve() { 
    spf[1] = 1; 
    for (int i=2; i<lim; i++) 
        spf[i] = i; 
    for (int i=4; i<lim; i+=2) 
        spf[i] = 2; 
    for (long long i=3; i*i<lim; i++) 
        if (spf[i] == i) 
            for (long long j=i*i; j<lim; j+=i) 
                if (spf[j]==j) spf[j] = i; 
} 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,c=0,t=1,i,j,k,sum=0,ans=1,x;
	cin>>n;
	sieve();
	map<int,int> pf;
	map<int,vector<int> > mp;
	//vector<unordered_map<int,int> > pf(n);
	unordered_set<int> f;
	for(int i=0;i<n;i++){
		pf.clear();
		cin>>x;
		while(x!=1){
			pf[spf[x]]++;
			x=x/spf[x];
		}
		for(auto i:pf)
			mp[i.fi].pb(i.se);
	}
	for(auto i:mp){
		if(i.se.size()>=n-1){
			sort(all(i.se));
			if(i.se.size()==n)
				ans*=pow(i.fi,i.se[1]); 
			else ans*=pow(i.fi,i.se[0]); 
		}
	}
	cout<<ans;
	
}