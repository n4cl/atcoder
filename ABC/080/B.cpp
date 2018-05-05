#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, t, keta;
    t = 0;
    cin >> n;
    keta=n;
    while(keta>0){
        t += keta % 10;
        keta /= 10;
    }

    if(n%t==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
