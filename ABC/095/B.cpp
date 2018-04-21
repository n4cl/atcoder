#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, x, t, ans;
    vector<int> vc;
    ans=0;
    cin >> n >>x;
    REP(i,n){
        cin >> t;
        vc.push_back(t);
    }

    sort(vc.begin(), vc.end());
    REP(i,n){
        x -= vc[i];
        ans++;
    }
    while(1){
        x -= vc[0];
        if(x<0){
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
