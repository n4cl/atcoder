#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >>n;

    vector<int> a1;
    vector<int> a2;

    a1.push_back(0);
    a2.push_back(0);

    for(int i = 1; i < n + 1; i++){
        cin >> t;
        a1.push_back(t + a1[i-1]);
    }
    for(int i = 1; i < n + 1; i++){
        cin >> t;
        a2.push_back(t + a2[i-1]);
    }
    int tmp, ans=0;
    for(int i = 1; i < n + 1; i++){
        tmp = a1[i] + a2[n] - a2[i-1];
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}
