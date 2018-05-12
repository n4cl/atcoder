#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int x, ans, p, t;
    ans = 1;
    cin >> x;
    FOR(b, 2, x){
        p = 2;
        while(1){
            t = pow(b, p);
            if(t <= x){
                if(ans < t) ans = t;
                p++;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
