#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    string s, msg;
    msg = "yes";
    cin >> s;
    REP(i,s.size()-1){
        FOR(j,i+1,s.size()){
            if(s[i]==s[j]) msg = "no";
        }
    }
    cout << msg << endl;
    return 0;
}
