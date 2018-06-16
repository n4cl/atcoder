#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int d, n, t, ans, tmp, d_cnt, n_cnt;
    cin >> d >> n;
    ans = 0;
    if(d == 0) t = 1;
    else if(d == 1) t = 100;
    else if(d == 2) t = 10000;
    while(1){
        ans += t;
        tmp = ans;
        d_cnt = 0;
        while(1){
            if(tmp % 100 == 0){
                d_cnt++;
                tmp /= 100;
            }
            else break;
        }
        if(d_cnt == d){
            n_cnt++;
        }
        if(n_cnt == n) break;
    }
    cout << ans << endl;
    return 0;
}
