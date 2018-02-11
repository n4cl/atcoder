#include <iostream>
#include <cstdlib>

using namespace std;

int n, t, x, y, u, v ,w, d;

int main(void) {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &t, &x, &y);
        d = abs(v-x)+abs(w-y);
        if (t<d) {
            cout << "No" << endl;
            return 0;
        }
        if ((t%2==0&&d%2!=0)||(t%2!=0&&d%2==0)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
