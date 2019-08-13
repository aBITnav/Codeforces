#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n,l;
    cin>>n>>m;
    if(n<m) cout<<-1;
    else{
        l=n/2+n%2;
        if(l%m) l+=(m-l%m);
        cout<<l;
    }
    
}