#include<bits/stdc++.h>
using namespace std;
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
	int n,t=1,i,j,x;
	cin>>t;
	while(t--){
		cin>>n;
		//unordered_map<int,int> mp;
		int mp[n+1]={};
		//unordered_map<int,int> f;
		int ans=0;
		int pre[n+1]={}; 
		int a[n];rep(i,n) {
			cin>>x;
			mp[x]++;	
			pre[i+1]=x+pre[i];
		}
		for( i=0;i<=n;i++){
			for(j=i+2;j<=n;j++){
				x=pre[j]-pre[i];
				if(x>0 and x<=n){
				ans+=(mp[x]);
				mp[x]=0;}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


