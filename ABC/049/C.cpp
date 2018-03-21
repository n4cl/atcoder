#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    string t[4] = {"dream", "dreamer", "erase", "eraser"};
    REP(i, 4){
        reverse(t[i].begin(), t[i].end());
    }
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    bool isSlice = false;
    for(int i=0; i<s.size();){
        REP(j, 4){
            if(s.substr(i, t[j].size())==t[j]){
                isSlice = true;
                i += t[j].size();
                break;
            }
        }
        if(isSlice == false){
            cout << "NO" << endl;
            return 0;
        }
        isSlice = false;
    }
    cout << "YES" << endl;
    return 0;
}
