#include <bits/stdc++.h>
using namespace std;

int keta(int n) {
    int t;
    t = 0;
    while(n){
        t += n % 10;
        n /= 10;
    }
    return t;
}

int main(void) {
    int n, a, b, ans;
    ans = 999999;
    cin >> n;
    for(int i = 1; i < n / 2 + 1; i++){
        a = keta(i);
        b = keta(n - i);
        ans = min(ans, a + b);
    }
    cout << ans << endl;

    return 0;
}
