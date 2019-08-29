#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c,d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(!a and !b and !c) cout<<-1;
	
	else if(a==0 and b==0 and c!=0){
		cout<<0;
	}
	else if(a==0){
		printf("1\n%0.7lf",-c/b);
	}
	else if(d<0) cout<<0;
	else if(d==0){
		printf("1\n%0.7lf",-b/(2*a));
	}
	else if(d>0 and a>0){
		printf("2\n%0.7lf\n%0.7lf",(-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));
	}
	else if(d>0 and a<0){
		printf("2\n%0.7lf\n%0.7lf",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	}
	return 0;
}