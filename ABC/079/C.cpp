#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a[4], t;
    string inp, ans;
    cin >> inp;
    for(int i = 0; i < 4; i++){
        a[i] = inp[i] - '0';
    }

    for(int i = 0; i < 1 << 3; i++){
        t = a[0];
        ans = "";
        for(int j = 0; j < 3; ++j){
            if(i & (1 << j)){
                t += a[j + 1];
                ans += '+';
            }
            else{
                t -= a[j + 1];
                ans += '-';
            }
        }
        if(t == 7) {
            printf("%d%c%d%c%d%c%d=7\n", a[0], ans[0], a[1], ans[1], a[2], ans[2], a[3]);
            return 0;
        }
    }

    return 0;
}
