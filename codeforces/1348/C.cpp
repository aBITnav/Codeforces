#include<bits/stdc++.h>
using namespace std;
string s;
int n,k,T;
int main()
{
	cin>>T;
	while(T--){
		scanf("%d%d",&n,&k);
		cin>>s;
		sort(s.begin(),s.end());
		cout<<s[k-1];
		if(s[0]!=s[k-1]){puts("");continue;}
		if(s[k]!=s[n-1]){cout<<s.substr(k,n-k+1)<<endl;continue;}
		for(int i=k;i<n;i+=k)cout<<s[i];
		puts("");
	}
}