#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    string s;
    int size = 26;
    int w[size]={0};
    cin >> s;
    REP(i, s.size()){
        w[s[i]-'a'] = 1;
    }
    REP(i, size){
        if(w[i]==0){
            cout << char(i+'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
