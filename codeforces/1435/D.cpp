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
	int n,x,c=0;
	cin>>n;
	char ch;
	vector<int> v(n);
	stack<int> s,ms;
	string t="";
	rep(i,0,2*n) {
		cin>>ch;
		t+=ch;
		if(ch=='+'){
			if(s.size()>n){
				cout<<"NO";
				return;
			}
			s.push(c++);	
		}
		else{
			cin>>x;
			if(s.empty()){
				cout<<"NO";
				return;
			}
			v[s.top()]=x;
			s.pop();
		}		
	}
	c=0;
	for(char i:t){
		if(i=='+'){
			s.push(v[c]);
			if(ms.empty() or ms.top()>=v[c]) ms.push(v[c]);
			c++;
		}
		else{
			int x=s.top();
			s.pop();
			if(x==ms.top()) ms.pop();
			else {
				cout<<"NO";
				return;
			}
		}
		
	}
	
	cout<<"YES\n";
	for(int i:v) cout<<i<<" ";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



