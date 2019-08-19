#include <iostream>
using namespace std;

int main() {
	int n,x,h=0,f=0,t=0;
	string s="YES";
	cin>>n;
	while(n--){
		cin>>x;
		if(x==25) t++;
		if(x==50)
			if(t>0){
			f++;t--;
			}
			else {
				s="NO"; break;
			}
		if(x==100){
			if(f>0 and t>0){
				f--;t--;
			}
			else if(t>2) t-=3;
			else {
				s="NO"; break;	
			}
		}
	}
	cout<<s;
	return 0;
}