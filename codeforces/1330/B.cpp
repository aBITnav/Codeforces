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
	//string s;
	int n,m,c=0,t=1,x;
	cin>>t;
	while(t--){
		set<int> s1,s2;
		vector<int> v;
		map<int,int> mp;
		cin>>n;
		int a[n],ml[n]={},mr[n]={},ul[n]={},ur[n]={};
		for(int i=0;i<n;i++) {
				cin>>a[i];
		}
		
		ml[0]=a[0],mr[n-1]=a[n-1];
		for(int i=1;i<n;i++)ml[i]=max(a[i],ml[i-1]);
		for(int i=n-2;i>=0;i--)mr[i]=max(a[i],mr[i+1]);
		
		for(int i=0;i<n;i++) {
			s1.insert(a[i]);
			ul[i]=s1.size();
		}
			
		for(int i=n-1;i>=0;i--) {
			s2.insert(a[i]);
			ur[i]=s2.size();	
		}
		
		for(int i=1;i<n;i++){
			if(ul[i-1]==i and ur[i]==n-i and ml[i-1]==i and mr[i]==n-i)
			    v.pb(i);
			
		}
		cout<<v.size()<<endl;
		for(int i:v) cout<<i<<" "<<n-i<<endl;
		
		
		
		
		

	}
	return 0;
}

