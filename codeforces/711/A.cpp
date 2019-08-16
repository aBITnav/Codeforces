#include <iostream>
using namespace std;

int main() {
	int n,f=0;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		if(s[i][0]=='O' and s[i][1]=='O'){
			f=1;
			s[i][0]=s[i][1]='+'; break;
		}
		if(s[i][3]=='O' and s[i][4]=='O'){
			f=1;
			s[i][3]=s[i][4]='+';break;
		}
		
		
	}
	if(f==1){
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++) cout<<s[i]<<endl;
	}
	else cout<<"NO"<<endl;
	
	return 0;
}