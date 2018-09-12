#include<iostream>
#include<string>
using namespace std;

int main(){
     int n;
     cin>>n;
     string s[n];
     for(int i=0;i<n;i++){
     	
     	cin>>s[i];
     	int l=s[i].size();
     	string num=to_string(l-2);
     	if(l>10) s[i]=s[i][0]+num+s[i][l-1];
     	
     }
     for(int i=0;i<n;i++)
     	
     	cout<<s[i]<<endl;
}