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



void solve() {
	string t,s,ans;
	cin>>t;
	int f[128]={};
	for(int i=t.size()-1;i>=0;i--){
		if(f[t[i]]==0) s+=t[i];
		f[t[i]]++;
	}
	reverse(all(s));
	//cout<<s<<"\n";
	int n=s.size(),l=0;
	for(int i=0;i<n;i++){
		if(f[s[i]]%(i+1)){
			cout<<"-1\n";
			return;
		}
		l+=(f[s[i]]/(i+1));
	}
	ans=t.substr(0,l);
	string ac=ans,td=ans;
	for(char i:s){
		string tdd;
		for(int j:td) if(j!=i) tdd+=j;
		ac+=tdd;
		td=tdd;
	}
	if(ac!=t){
		cout<<"-1\n";
		return;
	}
	
	
	cout<<ans<<" "<<s<<"\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




