#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,p,w,d,x=1,y,g,z;
	cin>>n>>p>>w>>d;
	if(n*w<p or p%__gcd(w,d)) return cout<<"-1",0;
	rep(i,0,w)
		if(p>=i*d and (p-i*d)%w==0){
			x=(p-i*d)/w;
			y=i;
			z=n-x-y;
			cout<<x<<" "<<y<<" "<<z;
			return 0;
		}
	cout<<"-1";
}




