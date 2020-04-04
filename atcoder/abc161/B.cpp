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
	vector<int> v;
	map<int,int> mp;
	int n,m,c=0,t=1;
	//cin>>t;
	while(t--){
		double sum=0;
		cin>>n>>m;
		double a[n],f;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		f=sum/(4*m);
		for(int i=0;i<n;i++){
			if(a[i]-f>=0) c++;
		}
		if(c>=m) cout<<"Yes";
		else cout<<"No";
	}
	return 0;
}

