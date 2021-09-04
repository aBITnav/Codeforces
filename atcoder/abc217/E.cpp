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



void solve() {
	int t,x,y,c=0;;
	cin>>t;
	multiset<int> s;
	queue<int> q;
	while(t--){
		cin>>x;
		if(x==1){
			cin>>y;
			q.push(y);
		} else if(x==2) {
			int ans;
			if(!s.empty()){
				ans=(*s.begin());
				s.erase(s.begin());
			} else {
				ans=q.front();
				q.pop();
			}
			cout<<ans<<"\n";
		} else {
			while(!q.empty()){
				s.insert(q.front());
				q.pop();
			}
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




