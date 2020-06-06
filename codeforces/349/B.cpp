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
	int n,mn=1e9;
	cin>>n;
	int a[10];
	map<int,int> mp;
	for(int i=1;i<10;i++){
		cin>>a[i];
		mn=min(mn,a[i]);
		mp[a[i]]=max(mp[a[i]],i);
	} 
	int d=mp[mn];
	int l=n/mn;
	if(l==0){
		cout<<-1;
		return 0;
	}
	int inc[10];
	for(int i=1;i<10;i++) {
		inc[i]=a[i]-mn;
	}
	int rem=n%mn;
	//cout<<rem<<endl<<endl;
	int ans[l];
	for(int i=0;i<l;i++) ans[i]=d;
	
	for(int i=0;i<l;i++){
		for(int j=9;j>d;j--){
			if(rem>=inc[j]){
				ans[i]=j;
				rem=rem-inc[j];
				//cout<<rem<<"\n\n";
				break;
			}
		}
	}
	for(int i:ans) cout<<i;
}


