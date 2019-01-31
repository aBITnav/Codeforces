#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 300010;

vector<int> app[maxn];
set<int> cnt;

int main()
{
    int n,q,x,type,num;
    while(~scanf("%d%d",&n,&q))
    {
        num = 0;
        cnt.clear();
        int last = 0;
        for(int i=0;i<q;i++)
        {
            scanf("%d%d",&type,&x);
            if(type==1)
            {
                app[x].push_back(++num);
                cnt.insert(num);
            }
            else if(type==2)
            {
                for(int i=0;i<app[x].size();i++)
                    cnt.erase(app[x][i]);
                app[x].clear();
            }
            else
            {
                for(int i=last;i<=x;i++)
                {
                    cnt.erase(i);
                }
                last = max(x,last);
            }
            printf("%d\n",cnt.size());
        }
    }
    return 0;
}
