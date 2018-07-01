#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, a[100], t, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            t = abs(a[i] - a[j]);
            ans = max(ans, t);
        }
    }
    cout << ans << endl;
    return 0;
}
