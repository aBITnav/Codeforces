#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cout<<"-1\n";
			continue;
		}
		if(n%2==0)
		{
			 m=n/2;
			while(m--)
			{
				cout<<"54";
			}
			cout<<"\n";
		}
		else{
			cout<<"5";
			m=n/2;
			while(m--)
			{
				cout<<"54";
			}
			cout<<"\n";
			
		}
		
		
	}
	
	
	
	return 0;
}