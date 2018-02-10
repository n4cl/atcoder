#include <iostream>

using namespace std;

int main(void) {
    string a, b;
    cin >> a >> b;
    int ab;
    ab = stoi(a+b);

    for (int i=1;i<=1000;i++) {
        if (i*i==ab){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
