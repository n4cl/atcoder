#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    long a, x, y;
    a = pow(10, 18);
    cin >>x >>y;

    if (x%y == 0 || x == y){
        cout << -1 << endl;
        return 0;
    }
    for(long i=x; i<=a; i+=x){
        if(i%y != 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}