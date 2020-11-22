#include<bits/stdc++.h>
using namespace std;

map<string,double> dp;
double solve(int a,int b,int c) {
	if(a==100 or b==100 or c==100) 
		return 0;
	string key=to_string(a)+" "+to_string(b)+" "+to_string(c);
	if(dp.find(key)!=dp.end()) 
		return dp[key];
	double p=((solve(a+1,b,c)+1)*a)/(a+b+c);
	double q=((solve(a,b+1,c)+1)*b*1.0)/(a+b+c);
	double r=((solve(a,b,c+1)+1)*c*1.0)/(a+b+c);
	return dp[key]=p+q+r;
}


signed main(){
	int a,b,c;
	cin>>a>>b>>c;
	printf("%0.9lf",solve(a,b,c));
	return 0;
}



