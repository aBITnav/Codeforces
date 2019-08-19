#include <iostream>
using namespace std;
 
int main() {
	int c1,c2,c3,c4,c5,l=0,g=0;
	cin>>c1>>c2>>c3>>c4>>c5;
	int sum=c1+c2+c3+c4+c5;
	if(sum%5 || !sum) cout<<-1;
	else{
	int b=sum/5;
    if(c1>b) l+=(c1-b);
    else g+=(b-c1);
    if(c2>b) l+=(c2-b);
    else g+=(b-c2);
    if(c3>b) l+=(c3-b);
    else g+=(b-c3);
    if(c4>b) l+=(c4-b);
    else g+=(b-c4);
    if(c5>b) l+=(c5-b);
    else g+=(b-c5);
    
    
    if(l!=g) cout<<-1;
    else cout<<b;
	
	}
	return 0;
}