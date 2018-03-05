#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

long long word[6];
long long ans;

int main(void) {
    string s;
    int n;
    cin >> n;
    while(n--) {
        cin >> s;
        if (s[0] == 'M') {
            word[0] += 1;
        } else if (s[0] == 'A') {
            word[1] += 1;
        } else if (s[0] == 'R') {
            word[2] += 1;
        } else if (s[0] == 'C') {
            word[3] += 1;
        } else if (s[0] == 'H') {
            word[4] += 1;
        }
    }
    ans += word[0] * word[1] * word[2];
    ans += word[0] * word[1] * word[3];
    ans += word[0] * word[1] * word[4];
    ans += word[0] * word[3] * word[2];
    ans += word[0] * word[3] * word[4];
    ans += word[0] * word[2] * word[4];

    ans += word[1] * word[2] * word[3];
    ans += word[1] * word[3] * word[4];
    ans += word[1] * word[2] * word[4];

    ans += word[2] * word[3] * word[4];

    cout << ans << endl;
    return 0;
}
