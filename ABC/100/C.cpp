#include <bits/stdc++.h>
using namespace std;

int div2(int n){
    if(n % 2 != 0) return 0;
    return div2(n / 2) + 1;
}

int main(void) {
    int n, t, ans;
    cin >> n;
    ans = 0;
    for(int i = 0; i < n; i++){
        cin >> t;
        ans += div2(t);
    }
    cout << ans << endl;
    return 0;
}
