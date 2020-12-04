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
#define INT_MAX ((1ll<<32)-1)
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1,n;
	cin>>t;
	stack<int> s;
	int f[101]={},x=0;
	string str;
	while(t--) {
		cin>>str;
		if(str=="add"){
			int mul=1;
			for(int i=1;i<101;i++){
				double p=pow(i,f[i]);
				if(p>INT_MAX){
					cout<<"OVERFLOW!!!";return 0;
				}
				mul*=p;
				if(mul>INT_MAX or mul<0){
					cout<<"OVERFLOW!!!";return 0;
				}
			}
			x+=mul;
			if(x>INT_MAX or x<0){
				cout<<"OVERFLOW!!!";return 0;
			}
		}
		else if(str=="for"){
			cin>>n;
			s.push(n);
			f[n]++;
		}
		else{
			n=s.top();
			s.pop();
			f[n]--;
		}
	}
	cout<<x;
	return 0;
}



