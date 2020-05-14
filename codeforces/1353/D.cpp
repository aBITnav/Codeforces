#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define pi pair<int,int>

int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M


/*struct com {
    constexpr bool operator()(pair<int, int> const & a,
                              pair<int, int> const & b) const noexcept
    { return a.first > b.first && a.second<b.second; }
};*/
struct com
{
    bool operator()(pi a,pi b)
    {
        if((a.se-a.fi)==(b.se-b.fi))
		return a.fi>b.fi;
		
		return (a.se-a.fi)<(b.se-b.fi);
    }
};

/*struct com {
    constexpr bool operator()(pair<int, int> const & a,
                              pair<int, int> const & b) const noexcept
    { 
    if((a.se-a.fi)==(b.se-b.fi))
		return a.fi<b.fi;
	return (a.se-a.fi)>(b.se-b.fi);
	
	}
};*/


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//string s;
	int n,c=0,t=1,i,j,k,sum=0,f=0,x,y;
	cin>>t;
	while(t--){
		cin>>n;
		priority_queue<pi,vector<pi>,com> q;
		int a[n]={};
		int l=0,r=n-1,m;
		q.push({l,r});
		for(int i=1;i<n;i++){
			pi e=q.top();
			q.pop();
			l=e.fi,r=e.se;
			m=(l+r)/2;
			a[m]=i;
			if(l<=r){
				q.push({l,m-1});
				q.push({m+1,r});
			}
		}
		a[n-1]=n;
		for(int i:a) cout<<i<<" ";
		cout<<endl;

	}
	return 0;
}


