#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v,u,p=0;
    cin>>n;
    int a[n+1]={0}, b[n][2];
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        a[u]++;
        a[v]++;
        b[i][0]=u;
        b[i][1]=v;
    }
    for (int i=1;i<=n;i++)
        if (a[i]>=3)
        {p=i;break;}
    if (p==0)
        for(int i=0;i<n-1;i++)
        cout<<i<<"\n";
    else{
        int deg=0,q=3;
        for(int i=0;i<n-1;i++)
        	if ((b[i][0]==p || b[i][1]==p) && deg<3)    {
                cout<<deg<<"\n";
                deg++;
            }
            else{
                cout<<q<<"\n";
                q++;
            }   
    }
    return 0;
}
