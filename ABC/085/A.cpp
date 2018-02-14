#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    cout << "2018" + s.substr(4) << endl;
    return 0;
}
