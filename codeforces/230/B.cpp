#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;


int main() {
	ll n,x;
	int com[1000001];
	memset(com,0,sizeof(com));
	for(ll i=2;i<1000000;i++)
		if(!com[i])
			for(ll j=i*i;j<1000000;j+=i)  com[j]=1;
	set<ll int> s;
		
	for(ll i=2;i<1000000;i++) if(!com[i]) s.insert(i*i);
	
	cin>>n;
	while(n--){
		cin>>x;
		if(s.find(x)!=s.end()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}