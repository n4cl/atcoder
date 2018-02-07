#include <iostream>

using namespace std;

int main(void) {
    int a, b, c, x, ans, t;
    cin >> a >> b >> c >> x;
    ans = 0;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            for(int k = 0; k <= c; k++){
                t = 500 * i + 100 * j + 50 * k;
                if(t == x){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
