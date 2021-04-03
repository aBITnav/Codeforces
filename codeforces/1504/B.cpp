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

bool chk(string s,string t){
	sort(all(s));sort(all(t));
	return s==t;
}

string inv(string s){
	string t;
	for(char i:s) if(i=='0') t+='1';else t+='0';
	return t;
}

void solve() {
	int n,c=0;
	string s,t;
	cin>>n>>s>>t;
	if(!chk(s,t)) {
		cout<<"NO"<<endl;
		return;
	}
	vector<int> v;
	v.pb(0);
	rep(i,0,n){
		if(s[i]=='1') c++;
		if(i%2 and c==(i+1)/2) v.pb(i+1); 
	}
	if(v.back()!=n)	v.pb(n);
	for(int i=0;i<v.size()-1;i++){
		string s1=s.substr(v[i],v[i+1]-v[i]);
		string t1=t.substr(v[i],v[i+1]-v[i]);
		if(s1!=t1 and inv(s1)!=t1) {
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	 
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




