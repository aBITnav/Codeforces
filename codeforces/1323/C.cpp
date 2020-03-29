#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
	fast;
	string s;
	vector<int> v;
	int n,ans=0,l=0,r=0;
	cin>>n>>s;
	s="#"+s;
	int a[n+1]={};
	for(int i=0;i<=n;i++){
		if(s[i]=='(')	l++,a[i]=a[i-1]+1;
		if(s[i]==')')	r++,a[i]=a[i-1]-1;
		if(a[i]==0) v.push_back(i);
	}
	if(l!=r) cout<<-1;
	else{
		for(int i=0;i<v.size()-1;i++){
			if(a[(v[i]+v[i+1])/2]<0) ans+=v[i+1]-v[i];
		}
		cout<<ans;
	}
	return 0;
}

