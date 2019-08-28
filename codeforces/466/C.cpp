#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll n; cin>>n;
    ll a[n+1];
    ll s=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        s += a[i];
    }
    if(s%3==0){
        ll cnt[n+2]={0};
        ll ss=0;
        for(int i=n; i>0; i--){
            ss += a[i];
            if(ss==s/3){
                cnt[i] = 1;
            }
            cnt[i] += cnt[i+1];
        }
        ss=0;
        ll ans =0;
        for(int i=1; i<=n-2; i++){
           ss += a[i];
           if(ss== s/3){
            ans += cnt[i+2];
           }
        }
        cout<<ans<<"\n";
    }else{
        cout<<0<<"\n";
    }
}
