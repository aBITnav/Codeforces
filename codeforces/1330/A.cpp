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
		
		set<int> s;
		map<int,int> mp;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++) {
				cin>>a[i];
				s.insert(a[i]);	
		}
		vector<int> v(all(s));
		int i=0,j=0;
		while(1){
			i++;
			if(s.find(i)==s.end()) m--;
			if(m==-1) break;
		}
		cout<<i-1<<endl;
		
		
		

	}
	return 0;
}

