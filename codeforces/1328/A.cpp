#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t=1,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else cout<<b-(a%b)<<endl;
        
        //for(int i=0;i<n;i++)
    }
    return 0;
}