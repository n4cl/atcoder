#include <iostream>

using namespace std;

int keta(int num) {
    int t;
    t = 0;
    while (0<num) {
        t += num % 10;
        num /= 10;
    }
    return t;
}

int main(void) {
    int n, a, b, s, total;
    cin >> n >> a >> b;
    total = 0;
    for (int i = 1; i <= n; i++) {
        s = keta(i);
        if (s >= a && s <= b) {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}
