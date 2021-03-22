#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int ans=0,h,w,A,B;

void solve(int m,int a,int b) {
	if(m+1==(1<<(h*w))){
		ans+=(a==0 and b==0);
		return;
	}
	rep(i,0,h) rep(j,0,w) {
		int p=(1<<(i*w+j));
		if(!(m&p)){
			m|=p;
			if(b>0) solve(m|p,a,b-1);
			if(a>0 and j!=w-1 and !(m&(p<<1)))
				solve(m|p|(p<<1),a-1,b);
			if(a>0 and i!=h-1 and !(m&(p<<w)))
				solve(m|p|(p<<w),a-1,b);
		}
	}
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>h>>w>>A>>B;
	solve(0,A,B);
	cout<<ans;
}




