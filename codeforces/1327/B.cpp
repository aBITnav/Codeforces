#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t=1,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> g[n];
        int state[n]={};
        for(int i=0;i<n;i++){
            cin>>x;
            for(int j=0;j<x;j++){
                cin>>y;
                g[i].push_back(y-1);
            }
        }
        int  pans[n],ind=0,fg;
        for(int i=0;i<n;i++){
            fg=0;
            for(int& j:g[i])
                if(!state[j]){
                    state[j]=1;
                    fg=1;
                    break;
                }
            if(!fg){
                pans[ind]=i;
                ind++;
            }
        }
        int ans=-1;
        for(int i=0;i<n;i++)
            if(!state[i]){
                ans=i;
                break;
            }
        if(ans>=0)
            cout<<"IMPROVE\n"<<pans[0]+1<<" "<<ans+1<<endl;
        else cout<<"OPTIMAL\n";
    }
    return 0;
}