#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int MAX = 10000001; 
int factor[10000001]={}; 

void sieve() 
{ 
    factor[1] = 1; 
    for (int i = 2; i < MAX; i++) 
        factor[i] = i; 
    for (int i = 4; i < MAX; i += 2) 
        factor[i] = 2; 
    for (int i = 3; i * i < MAX; i++) { 
        if (factor[i] == i) { 
            for (int j = i * i; j < MAX; j += i) { 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
} 
int f(int n) 
{ 
    if (n == 1) 
        return 1; 
  
    int ans = 1; 
    int dup = factor[n];  
    int c = 1; 
    int j = n / factor[n]; 
    while (j != 1) { 
        if (factor[j] == dup) 
            c += 1; 
        else { 
            dup = factor[j]; 
            ans = ans * (c + 1); 
            c = 1; 
        } 
        j = j / factor[j]; 
    } 
    ans = ans * (c + 1); 
  
    return ans; 
} 



void solve() {
	sieve(); 
	int sum=0;
	int n;
	cin>>n;
	for(int i = 1;i <=n;i++) 
        sum+=i*f(i);
    cout<<sum;
}


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) solve();
	return 0;
}



