#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
    cin>>n;
    map<int,int> m;
    for(int i=1;i<=n;i++)
    {
    	cin>>x;
    	m[x]=i;
    }
    for(auto i:m)
    	cout<<i.second<<" ";
    
	return 0;
}