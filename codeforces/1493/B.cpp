#include<bits/stdc++.h>
using namespace std;
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M
int cc[10]={1,1,1,0,0,1,0,0,1,0};
int h,m;

bool ref(string hh,string mm){
	string t=hh+mm;
	reverse(all(t));
	rep(i,0,t.size())	{
		if(cc[t[i]-'0']==0) return false;
		if(t[i]=='2') t[i]='5';
		else if(t[i]=='5') t[i]='2';
	}
	if(stoi(t.substr(0,hh.size()))>=h) return false;
	if(stoi(t.substr(hh.size()))>=m) return false;
	return true;
}

void solve() {
	string t;
	cin>>h>>m>>t;
	int hh=stoi(t.substr(0,2));
	int mm=stoi(t.substr(3));
	int s=hh*m+mm;
	int e=h*m;
	rep(i,s,e+1){
		if(i==e) i=0;
		hh=i/m;
		mm=i-hh*m;
		string th=to_string(hh);
		string tm=to_string(mm);
		if(th.size()==1) th="0"+th;
		if(tm.size()==1) tm="0"+tm;
		if(ref(th,tm)){
			if(th.size()==1) th="0"+th;
			if(tm.size()==1) tm="0"+tm;
			cout<<th<<":"<<tm<<"\n";
			return;
		}
		if(i==0) break;
	}
	//cout<<"00:00\n";
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}




