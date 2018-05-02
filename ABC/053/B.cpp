#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

string s;
int head, tail;
int main(void) {
    cin >> s;
    REP(i, s.size()){
        if(s[i] == 'A'){
            head=i;
            break;
        }
    }
    REPR(i, s.size()){
        if(s[i] == 'Z'){
            tail=i;
            break;
        }
    }
    if(head>tail) cout << 0 << endl;
    else cout << tail-head+1 << endl;
    return 0;
}
