#include <bits/stdc++.h>
using namespace std;

int div100(int n){
    if(n % 100 != 0) return 0;
    return div100(n / 100) + 1;
}

int main(void) {
    int d, n;
    int cnt = 0;
    cin >> d >> n;
    for(int i = 1;; i++){
        if(div100(i) == d){
            cnt++;
            if(cnt == n){
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}
