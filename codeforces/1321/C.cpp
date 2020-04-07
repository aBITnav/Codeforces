#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
	fast;
	string s,s2;
	int n,c=0;
	cin>>n>>s;
	s2=s;
	sort(all(s2));
	reverse(all(s2));
	for(char i:s2){
		int j=0;
		for(;j<s.size();++j){
			if(i==s[j] and ((j!=0 and s[j-1]+1==s[j]) or (j!=n-1 and s[j+1]+1==s[j]))){
				c++;break;
			}
		}
		if(j<s.size()) s.erase(s.begin()+j);
	}
	
	cout<<c;
	
	return 0;
}

