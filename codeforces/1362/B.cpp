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
	int n,m,t,i;
	cin>>t;
	int po[64]={1};
	for(int i=1;i<64;i++) po[i]=po[i-1]*2; 
	while(t--){
		vector<int> v;
		//map<int,int> mp;
		set<int> st;
		cin>>n;
		int a[n];rep(i,n) {
			cin>>a[i];
			st.insert(a[i]);
		}
		int mn=1e9;
		for(int i=1;i<n;i++){
			int x=a[i]^a[0];
			int f=1;
			for(int i=0;i<n;i++){
				if(st.find(x^a[i])==st.end()) f=0;
				//st.erase(x^a[i]);
				//else f=0;
			}
			if(f) mn=min(mn,x);
		}
		if(mn==1e9) cout<<-1<<endl;
		else cout<<mn<<endl;
	}
	return 0;
}


