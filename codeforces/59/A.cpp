#include <iostream>
using namespace std;

int main() {
	string s;
	int l=0,u=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z') l++;
		else u++;
	}
	if(u>l){
	 	for(int i=0;i<s.size();i++) putchar(toupper(s[i]));
	}
	else{
	    	for(int i=0;i<s.size();i++) putchar(tolower(s[i]));	
	}
	return 0;
}