#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(i,n) for( i=0;i<n;i++)
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,n, maxi=0,c =0;
    cin>>n;
    ll arr[n],ans[n];
    loop(i,n)
    cin>>arr[i];
    loop(i,n){
    	maxi=max(maxi,c);
    	cout<<arr[i]+maxi<<" ";
    	c=arr[i]+maxi;
	}
   
    return 0;
}