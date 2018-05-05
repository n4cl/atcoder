#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, k, ans;
    ans=0;
    vector<int> a;
    REP(i,3){
        cin >> n;
        a.push_back(n);
    }
    cin >> k;
    sort(a.begin(), a.end(), greater<int>());
    a[0] *= pow(2, k);
    ans = accumulate(a.begin(), a.end(), 0);
    cout << ans << endl;
    return 0;
}
