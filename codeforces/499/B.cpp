#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,a,b;
	cin>>n>>m;
	string s[m][2],l[n];
	for(i=0; i<m; i++)
	{
		cin>>s[i][0];
		cin>>s[i][1];
	}
	for(i=0;i<n; i++)
	{
		cin>>l[i];
	}
	for(int j=0; j<n; j++)
	{
		for(i=0; i<m; i++)
		{
			if(l[j]==s[i][0])
			{
				break;
			}
		}
		a=s[i][0].length();
		b=s[i][1].length();
		if(a<=b)
		cout<<s[i][0]<<" ";
		else
		cout<<s[i][1]<<" ";
	}
}