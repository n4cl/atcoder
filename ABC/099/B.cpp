#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, x, y;
    cin >> a >> b;
    x = y = 1;
    for(int i = 2; i <= 999; i++){
        y = x;
        x += i;
        for(int j = y; j > 0; j--) {
            if(y - j == a && x - j == b) cout << j << endl;
        }
    }
    return 0;
}
