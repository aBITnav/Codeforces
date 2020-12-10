#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,i=-1;
	cin>>n>>k;
	int t=n;
	vector<int> v(32);
	while(t){
		i++;
		if(t%2) v[i]++;
		t/=2;
	}
	i=0;
	//cout<<i<<"  ";
	for(int j:v) i+=j;
	if(i>k or k>n) {
		cout<<"NO\n";
		return 0;
	}
	while(i!=k){
		int j;
		for(j=31;j>=0;j--) if(v[j]) break;
		v[j]--;
		i++;
		v[j-1]+=2;
	}
	cout<<"YES\n";
	rep(i,0,32){
		n=pow(2,i);
		rep(j,0,v[i]) cout<<n<<" ";
	}
	
	return 0;
}



