#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(void) {
    set<string> se;
    string s;
    int n;
    cin >> n;
    while(n--) {
        cin >> s;
        se.insert(s);
    }
    if (se.size()==3) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
    return 0;
}
