#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

bool c(char x1,char x2){
	if(x2==x1+1) return true;
	if(x1=='9' and x2=='0') return true;
	return false;
}

void solve() {
	int q,p,x,sum=0;;
	multiset<int> s;
	cin>>q;
	while(q--){
		cin>>p;
		if(p==1){
			cin>>x;
			x-=sum;
			s.insert(x);
		}
		else if(p==2){
			cin>>x;
			sum+=x;
		}
		else{
			int ans=*s.begin()+sum;
			s.erase(s.begin());
			cout<<ans<<"\n";
		}
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}




