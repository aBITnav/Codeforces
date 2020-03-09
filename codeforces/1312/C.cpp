#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t=1,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n],mx=0,x=1,f=0,s=0;
		for(int i=0;i<n;i++) cin>>a[i],mx=max(mx,a[i]);
		vector<int> p;
		map<int,int> m;
		while(x<=mx){
			p.push_back(x);
			x*=k;	}
		for(int i=0;i<n;i++){
			int num=a[i];
			if(!num) continue;
			for(int j=p.size()-1;j>=0;j--)
				if(num>=p[j]) m[j]++,num-=p[j];
			if(num!=0) f=1;		
		}
		for(auto i:m) if(i.second>1) f=1;
		//for(auto i:m) cout<<i.first<<"\t"<<i.second<<endl;
		if(f) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}