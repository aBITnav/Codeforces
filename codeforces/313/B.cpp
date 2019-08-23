#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n=s.size();
	s="1"+s+"1";
	int d[n+2]={},h[n+2]={};
	for(int i=1;i<=n;i++){
		if(s[i]=='.' and s[i+1]=='.') d[i+1]=d[i]+1;
		else d[i+1]=d[i];
		if(s[i]=='#' and s[i+1]=='#') h[i+1]=h[i]+1;
		else h[i+1]=h[i];
	}
	int t,l,r;
	cin>>t;
	while(t--){
		cin>>l>>r;
		cout<<d[r]-d[l]+h[r]-h[l]<<endl;
	}
}