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
	int a,b,c=0;
	string s,p;
	cin>>a>>b>>s;
	int n=a+b;
	for(int i=0;i<n/2;i++){
		if(s[i]==s[n-i-1])	continue;
		if(s[i]=='?') s[i]=s[n-i-1];
		else if(s[n-i-1]=='?') s[n-i-1]=s[i];
		else{
			cout<<-1<<endl;
			return;
		}
	}
	for(char i:s) if(i=='0') a--;else if(i=='1') b--;else c++;
	if(a<0 or b<0 or c!=a+b) {
		cout<<-1<<endl;
		return;
	}
	
	
	for(int i=0;i<n/2;i++)	if(s[i]=='?'){
		if(a>1) s[i]=s[n-i-1]='0',a-=2;
		else if(b>1) s[i]=s[n-i-1]='1',b-=2;
		else{
			cout<<-1<<endl;
			return;
		}
	}
	if(n%2 and s[n/2]=='?') {
		if(a>0) s[n/2]='0',a-=1;
		else if(b>0) s[n/2]='1',b-=1;
		else{
			cout<<-1<<endl;
			return;
		}
	}
	cout<<s<<endl;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




