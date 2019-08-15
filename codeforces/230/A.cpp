#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first) return a.second>b.second;
	return a.first<b.first;
}

int main() {
	int n,s,x,y,f=0;
	vector<pair<int,int> > v;
	cin>>s>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end(),comp);
	
	for(auto i:v){
		if(s>i.first) s+=i.second;
		else{
			f=1;
			break;
		}
	}
	if(f==1) cout<<"NO";
	else cout<<"YES";
	
	return 0;
}