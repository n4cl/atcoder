#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int k, s, ans;
int main(void) {
    cin >>k >>s;
    REP(x, k+1){
        REP(y, k+1){
            if(s-(x+y)>=0 && s-(x+y)<=k) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
