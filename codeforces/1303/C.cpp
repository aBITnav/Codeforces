#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int p=-1,f=0;
    	vector<char> v; 
    	v.clear();
    	string s;
    	cin>>s;
    	set<char> mp;
    	mp.clear();
    	for(int i=0;i<s.size();i++){
    		if(mp.find(s[i]) == mp.end()){
    			if(p== v.size()-1) {
    			    v.pb(s[i]);
    			    p++;
    			}
    			else if(p==0) v.insert(v.begin(),s[i]);
    			else{
    				f=1;break;;
    			}
    			mp.insert(s[i]);
    		}
    		else{
    			if(v[p]==s[i]) continue;
    			else if(p<v.size()-1 and v[p+1]==s[i]) p++;
    			else if(p>0 and v[p-1]==s[i]) p--;
    			else{
    				f=1;break;
    			}
    		}
 
    	}
    	if(f) cout<<"NO\n";
    	else{
    	cout<<"YES\n";
    	for(char i:v) cout<<i;
    	for(char i='a';i<='z';i++) if(mp.find(i)==mp.end()) cout<<i;
    	cout<<endl; }
	}
	return 0;
}