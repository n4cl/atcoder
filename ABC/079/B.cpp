#include <iostream>

using namespace std;
long long ll[87];
int main(void) {
    int n;
    cin >> n;
    ll[0]=2;
    ll[1]=1;
    for (int i=2;i<=n;i++) {
        ll[i]=ll[i-2]+ll[i-1];
    }
    cout << ll[n] << endl;
    return 0;
}
