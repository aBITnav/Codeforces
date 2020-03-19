#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

signed main() {
    int n , k;
    cin >> n >> k;
    int a[n],ans=1;
    map<int,int> ind;
    for(int i = 0 ;i < n ; i ++){
        cin >> a[i];
        ind[a[i]] = i;
    }
    vector<int> v;
    for(int i=n;i>n-k;i--){
    	v.push_back(ind[i]);
    }
    sort(v.begin() , v.end());
    for(int i=0;i<v.size()-1;i++){
    	int d=v[i+1]-v[i];
    	ans=((ans%mod)*(d%mod))%mod;
    }
    cout <<( k * ( 2 *  n - k + 1)) / 2 << " " << ans % mod << "\n";
    return 0;
}