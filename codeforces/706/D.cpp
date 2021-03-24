#include<bits/stdc++.h>

using namespace std;
#define int long long
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

struct node{
	node* next[2];
	int cnt,val;
	node(){
		next[0]=next[1]=0;
		cnt=0;
		val=1;
	}
};

void ins(node* p,int n){
	rep(i,30,-1){
		bool d=n&(1<<i);
		if(p->next[d]==0) 
			p->next[d]=new node();
		p=p->next[d];
		p->cnt++;
	}
	p->val=n;
}

void del(node* p,int n){
	rep(i,30,-1){
		bool d=n&(1<<i);
		p=p->next[d];
		p->cnt--;
	}
}

int maxor(node* p,int n){
	rep(i,30,-1){
		bool d=!(n&(1<<i));
		if(!p->next[d])	p=p->next[!d];
		else{
			node* x=p->next[d];
			if(!x->cnt) p=p->next[!d];
			else 		p=p->next[d]; 
		}
	}
	return p->val^n;;
}



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	node* root=new node();
	int q,x;
	char c;
	ins(root,0);
	cin>>q;
	while(q--){
		cin>>c>>x;
		if(c=='+') ins(root,x);
		else if(c=='-') del(root,x);
		else{
			cout<<maxor(root,x)<<"\n";
		}
	}
}




