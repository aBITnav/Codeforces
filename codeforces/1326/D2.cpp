#include <bits/stdc++.h>
using namespace std;
int t,tmp1,tmp2;
string S,ans1,ans2;

int KP(const string &s){
  string k1 = s;
  std::reverse(k1.begin(), k1.end());
  string kmp = s + "#" + k1;
  vector<int> lps(kmp.size(), 0);
  for (int i = 1; i < (int)lps.size(); ++i){
    int prev_idx = lps[i - 1];
    while (prev_idx > 0 && kmp[i] != kmp[prev_idx]){
      prev_idx = lps[prev_idx - 1];
    }
    lps[i] = prev_idx + (kmp[i] == kmp[prev_idx] ? 1 : 0);
  }
  return lps[lps.size() - 1];
}
    
int main(){
	cin>>t;
	while(t--){
		cin>>S;
		int le=0,ri=(int)S.length()-1;
		while(le<ri){
			if(S[le]==S[ri]){
				le++;
				ri--;
			} else
				break;
		}
		if(le>=ri){
			cout<<S<<endl;
			continue;
		}
		tmp1=tmp2=0;
		ans1=ans2="";
		for(int i=0;i<le;++i) ans1+=S[i];
		for(int i=ri+1;i<S.length();++i) ans2+=S[i];
		string tmp="";
		for(int i=le;i<=ri;++i) tmp+=S[i];
		tmp1=KP(tmp);
		reverse(tmp.begin(),tmp.end());
		tmp2=KP(tmp);
		if(tmp1>tmp2){
			for(int i=le;i<le+tmp1;++i)
				ans1+=S[i];
		} else {
			for(int i=ri-tmp2+1;i<=ri;++i)
				ans1+=S[i];
		}
		ans1+=ans2;
		cout<<ans1<<endl;
	}
	return 0;
}
