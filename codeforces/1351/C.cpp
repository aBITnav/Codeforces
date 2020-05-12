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

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		set<vector<int> > st;
		int x1=0,y1=0,x2,y2,c=0;
		for(char i:s){
			if(i=='N'){
				x2=x1;
				y2=y1+1;
			}
			else if(i=='S'){
				x2=x1;
				y2=y1-1;
			}
			else if(i=='E'){
				x2=x1+1;
				y2=y1;
			}
			else if(i=='W'){
				x2=x1-1;
				y2=y1;
			}
			vector<int> temp1{x1,y1,x2,y2};
			vector<int> temp2{x2,y2,x1,y1};
			if(st.find(temp1)==st.end() and st.find(temp2)==st.end() )
				c+=5;
			else c+=1;
			st.insert(temp1);
			st.insert(temp2);
			x1=x2;y1=y2;
			
		}
		cout<<c<<endl;
		
	}
}