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

int dis(string s1,string s2){
	int ans=0;
	for(int i=0;i<s1.size();i++)
		if(s1[i]!=s2[i]) ans++;
	return ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,m,t=1,i,j,k,sum=0,ans,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m;
		string s[n];
		int f1=1;
		for(int i=0;i<n;i++) cin>>s[i];
		for(int k=0;k<m;k++){
			for(char i='a';i<='z';i++){
				string t=s[0];
				t[k]=i;
				int f=1;
				for(int j=0;j<n;j++)
					if(dis(t,s[j])>1) f=0; 
				if(f) {
					f1=0;
					cout<<t<<endl;
					break;
				}
			}
			if(f1==0) break;
		}
		if(f1) cout<<-1<<endl;
		}
	}


