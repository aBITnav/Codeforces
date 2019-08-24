#include <iostream>
using namespace std;

int main() {
	int n,k,ans=0;;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		int d=k-a[i]-a[i-1];
		if(d>0){
			a[i]+=d;
			ans+=d;
		}
	}
	cout<<ans<<endl;
	for(int i:a) cout<<i<<" ";
}