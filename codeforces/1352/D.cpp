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
	int n,t=1,i,j,k,sum=0,ans,f=0,x,y;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];rep(i,n) cin>>a[i];
		int l=0,r=n-1,ls=0,rs=0,c=0,trs=0,tls=0;
		while(l<=r){
			if(c%2){
				while(l<=r and rs<=ls){
					rs+=a[r];
					r--;
				}
				
				trs+=rs;
				ls=0;
			}
			else{
				while(l<=r and ls<=rs){
					ls+=a[l];l++;  
				}
				tls+=ls;
				rs=0;
			}
			c++;
		}
		cout<<c<<" "<<tls<<" "<<trs<<endl;

	}
	return 0;
}


