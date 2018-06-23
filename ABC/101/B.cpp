#include <bits/stdc++.h>
using namespace std;

int keta(string n) {
    int res;
    res = 0;
    for(int i = 0; i < n.size(); i++){
        res += n[i] - '0';
    }
    return res;
}

int main(void) {
    string s;
    int d;
    cin >> s;
    d = stoi(s);
    if(d % keta(s) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
