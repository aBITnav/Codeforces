#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	scanf("%d",&n);
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int high=0;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i]>high)
		{
			high=a[i];
			a[i]=0;
		}
		else
		{
			a[i]=high+1-a[i];
		}
	}
	for(int i = 0; i < n; i++)
		printf("%d%c",a[i],i==n-1?'\n':' ');
	return 0;
}
//1 4 2 5 5 8 2 0 1 0
//9 6 8 5 5 2 8 9 2 2