#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, m, a;
    array<int, 50> c = {0};
    cin >> n >> m;
    REP(i, m){
        REP(j, 2){
            cin >> a;
            c[a-1]++;
        }
    }
    REP(i, n){
        cout << c[i] << endl;
    }
    return 0;
}
