#include <bits/stdc++.h>
using namespace std;

int main() {
	int c[12][12];
	memset(c,0,sizeof(c));
	for(int i=0;i<12;i++) c[i][0]=1;
	for(int i=1;i<12;i++)
		for(int j=1;j<=i;j++)
			c[i][j]=c[i-1][j]+c[i-1][j-1];
	string s1,s2;
	cin>>s1>>s2;
	int t1=0,t2=0,n=0,r=0,pos=0,total=0;
	for(char c:s1) 
		if(c=='+') t1++;
		else if(c=='-') t1--;
	for(char c:s2) 
		if(c=='+') t2++;
		else if(c=='-') t2--;
		else if(c=='?') n++;
	map<int,int> m;
	for(int i=-n;i<=n;i+=2,r++)
		m[i]=c[n][r];
	for(auto i:m){
		total+=i.second;
		if((t2+i.first)==t1) pos+=i.second;
	}
	double ans=(pos*1.0)/total;
	printf("%0.12lf",ans);
	return 0;
}