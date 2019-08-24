#include <bits/stdc++.h>
using namespace std;

int main() {
	    int a, b;
    cin >> a >> b;
    long long cnt = 0;
    while (a != 0 && b != 0 && (a > 1 || b > 1)) {
        cnt++;
        if (a > b) {
            a -= 2;
            b++;
        } else {
            b -= 2;
            a++;
        }
    }
    cout << cnt;
    return 0;

}