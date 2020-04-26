#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,l,r;
   	cin>>t;
    while(t--){
        cin>>n;
		int a[n],f=0;    
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<n;i++) if(a[i]>a[i-1]+1) f=1;
		if(f) cout<<"No\n";
		else cout<<"Yes\n";
    }
}


