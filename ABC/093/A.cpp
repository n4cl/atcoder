#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int a,b,c;
int main(void) {
    string s;
    cin >> s;
    REP(i, s.size()){
        if(s[i]=='a'){
            a = 1;
        }else if(s[i]=='b'){
            b = 1;
        }else if(s[i]=='c'){
            c = 1;
        }
    }
    if(a==1 && b==1 && c==1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
