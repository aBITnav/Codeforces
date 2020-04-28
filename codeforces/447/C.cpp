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
	int n;
	cin >> n;
	vector<int> l(n,1),r(n,1),a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]) l[i]=l[i-1]+1;
	}
	for(int j=n-2;j>=0;j--){
		if(a[j]<a[j+1]) r[j]=r[j+1]+1; 
	}
	int mx=1,s=0;
	for(int i=1;i<n-1;i++){
		if(a[i+1]>a[i-1]+1) mx=max(mx,r[i+1]+l[i-1]+1);
		else mx=max(mx,max(r[i+1],l[i-1])+1);
	}
	if(n>1){
		mx=max(mx,r[1]+1);
		mx=max(mx,l[n-2]+1);	
	} 
	cout<<mx;
	
 
	
	return 0;
}
 