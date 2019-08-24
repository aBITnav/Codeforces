#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	s="00"+s;
	int n=s.size(),f=1;
	for(int i=0;i<n and f;i++)
		for(int j=i+1;j<n and f;j++)
			for(int k=j+1;k<n and f;k++){
				int num=100*(s[i]-'0')+10*(s[j]-'0')+s[k]-'0';
				if(num%8==0) {
					f=0;
					cout<<"YES"<<endl<<num;
				}
			}
			if(f) cout<<"NO";
			
	return 0;
}