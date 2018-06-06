#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, num, e, o;
    cin >> n;
    e = o = 0;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 0) e++;
        else o++;
    }
    if(o >= 2 && o % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
