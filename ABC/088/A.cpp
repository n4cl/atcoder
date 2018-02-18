#include <iostream>

using namespace std;

int main(void) {
    int n, a, t;
    cin >> n >> a;
    t = n % 500;
    if (t-a<=0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
