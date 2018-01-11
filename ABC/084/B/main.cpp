#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a, b, len;
    string s, ans;
    ans = "Yes";
    cin >>a >>b;
    cin >>s;

    len = a + b + s.size();
    for (int i=0; i < len; i++) {
        if (i == a && s[i] != '-') {
            ans = "No";
        }
        if (i < a && s[i] == '-') {
            ans = "No";
        } else if (i > a+1 && s[i] == '-') {
            ans = "No";
        }
    }
    cout << ans << endl;
    return 0;
}
