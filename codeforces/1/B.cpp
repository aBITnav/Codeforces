#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
bool chk(string &s){
	int l=-1;
	for(int i=0;i<s.size();i++)
		if(s[i]>='A' and s[i]<='Z'){
			if(i-l>1) return 1;
			l=i;
		}
	return false;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	string s;
	int p[6]={1};
	for(int i=1;i<6;i++) p[i]=p[i-1]*26;
	cin>>t;
	while(t--){
		cin>>s;
		if(chk(s)){
			int i=1,d=0;
			while(s[i]>='0' and s[i]<='9') i++;
			i++;
			string a="";
			int n=stoll(s.substr(i));
			while(n>0){
				if(n%26==0){
					a+='Z';
					n=n/26;
					n--;
				}
				else{
				a+=(n%26+'A'-1);
				n/=26;}
			}
			//cout<<a<<endl<<endl;
		//a[0]++;
			reverse(all(a));
			cout<<a<<s.substr(1,i-2)<<endl;
		}
		else{
			//for(int i:p) cout<<i<<" ";  
			int i=0,d=0;
			while(s[i]>='A' and s[i]<='Z') i++;
			string n=s.substr(0,i);
			reverse(all(n));
			for(int j=0;j<i;j++)
				d=d+(n[j]-'A'+1)*p[j];
			cout<<"R"<<s.substr(i)<<"C"<<d<<endl;
			
		}
		
	}
}


