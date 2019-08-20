#include <iostream>
#include<stdio.h>
using namespace std;
int sol[105];
int main()
{
    int n,m,maxi,imax,isol,x;
    cin>>n>>m;
    for (int i=1; i<=m;i++){
        maxi=-1;
        imax=-1;
        for (int j=1; j<=n; j++){
            scanf("%d",&x);
            if (x>maxi){
                maxi=x;
                imax=j;
            }
        }
        sol[imax]++;
    }
    maxi=-1;
    for (int i=1; i<=n; i++){
        if (sol[i]>maxi){
            maxi=sol[i];
            isol=i;
        }
    }
    cout<<isol<<endl;
    return 0;
}