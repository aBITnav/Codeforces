#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,k,sx[215], sy[215], ex[215], ey[215],ans;

signed main(){
    cin >> n >> m >> k;
    for(int i=0;i<k;i++)
        cin >> sx[i] >> sy[i];
    for(int i=0;i<k;i++)
        cin >> ex[i]>> ey[i];
    string ch="";
    for(int i=0;i<m-1;i++){
        ch+='L';
        ans++;
    }
    for(int i=0;i<n-1;i++){
        ch+='U';
        ans++;
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m-1;j++){
                ch+='R';
                ans++;
            }
            if(i<n-1){ch+='D';
            ans++;}
        }else{
            for(int j=0;j<m-1;j++){
                ch+='L';
                ans++;
            }
            if(i<n-1){ch+='D';
            ans++;}
        }
    }
    cout << ans << "\n" << ch << endl;
    return 0;
}