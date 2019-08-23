#include <iostream>
using namespace std;
int p=100;
int po(long long x,long long y){
	long long res = 1;     
    x = x % p;  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
}

int main() {
    long long n;
    cin>>n;
    cout<<po(5,n)%100;
	return 0;
}