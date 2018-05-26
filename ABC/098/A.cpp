#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, ans;
    cin >> a >> b;
    ans = max(a + b, a - b);
    ans = max(ans, a * b);
    cout << ans << endl;
    return 0;
}
