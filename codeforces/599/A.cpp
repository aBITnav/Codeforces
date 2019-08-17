#include <bits/stdc++.h>
using namespace std;

int main() {
	int l1,l2,l3;
	cin>>l1>>l2>>l3;
	cout<<min(2*(l1+l2), min(2*(l2+l3),min(2*(l1+l3),l1+l2+l3)));
	return 0;
}