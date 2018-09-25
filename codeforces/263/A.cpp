#include <bits/stdc++.h>
using namespace std;

int main() {
	int i1,j1;
	int a[5][5];
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1) { i1=i;j1=j;}
		}
	cout<<abs(2-i1)+abs(2-j1);
}