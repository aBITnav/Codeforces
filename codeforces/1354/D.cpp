#include<bits/stdc++.h>
using namespace std;
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=1000010;

int bit[N];

void update(int n,int d){
	for(;n<N;n+=n&-n) bit[n]+=d;
}
int query(int n){
	int s=0;
	for(;n>0;n-=n&-n) s+=bit[n];
	return s;
}

int kth(int k){
	int l=0,r=N-1,m;
	while(l<=r){
		m=(l+r)/2;
		if(query(m)>=k) r=m-1;
		else l=m+1;
	}
	return l;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,x;
	cin>>n>>k;
	rep(i,0,n) {
		cin>>x;
		update(x,1);
	}
	rep(i,0,k){
		cin>>x;
		if(x>0) update(x,1);
		else{
			int k=kth(-x);
			update(k,-1);
		}
	}
	int ans=kth(1);
	if(ans==N) ans=0;
	cout<<ans;
}




