#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	bool a,ans=false;
	cin>>n;
	while(n--){
		cin>>a;
		ans|=a;
	}
	if(ans) cout<<"HARD";
	else cout<<"EASY";
	return 0;
}