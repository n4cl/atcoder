#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

const int INF = 100;

int n;
int a[210];

int main(void) {
    cin >> n;
    REP(i, n) cin >> a[i];

    int res=INF;
    int cnt;
    REP(i, n) {
        cnt=0;
        while(1){
            if(a[i]%2!=0) break;
            a[i]/=2;
            cnt++;
        }
        if(res>cnt){
            res=cnt;
        }
    }
    cout << res << endl;
    return 0;
}
