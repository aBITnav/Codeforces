#include <iostream>
using namespace std;

int main() {
	long long u,v,x;
	cin>>u>>v;
	x=(v-u)/2;
	if (u%2!=v%2 || u>v) cout<<-1;
	else if(u==v){
		if(u) cout<<"1\n"<<u;
		else cout<<0;
	}
	else if(u&x)
		cout<<"3\n"<<u<<" "<<x<<" "<<x;
	else cout<<"2\n"<<(u|x)<<" "<<(v-(u|x));
	return 0;
}