#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, k, num, ans;
    array<int, 200000> a = {0};
    cin >> n >> k;
    REP(i, n){
        cin >> num;
        a[num]++;
    }
    sort(a.begin(), a.end(), greater<int>());

    ans = 0;
    REP(i, n){
        if(i+1 > k && a[i] >= 1) ans+=a[i];
    }
    cout << ans << endl;
    return 0;
}
