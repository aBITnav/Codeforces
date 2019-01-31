#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n+1][n+1];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>=1 && j>=1 && i+1<=n && j+1<=n)
			if(a[i][j]=='X' && a[i+1][j+1]=='X' && a[i-1][j-1]=='X' && a[i-1][j+1]=='X' && a[i+1][j-1]=='X')
				count++;
		}
	}
	cout<<count;
	return 0;
}