#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, y, t, sum;
    cin >> n >> y;
    REP(i, n+1){
        REP(j, n+1){
            t = n - (i + j);
            sum = i * 10000 + j * 5000 + t * 1000;
            if(t >= 0  && sum == y) {
                printf("%d %d %d\n", i, j, t);
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}
