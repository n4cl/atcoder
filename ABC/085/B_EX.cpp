#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, d, cnt;
    cnt = 0;
    int num[110] = {0};
    cin >> n;
    REP(i, n){
        cin >> d;
        num[d]++;
    }
    REP(i, 110){
        if(num[i] >= 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
