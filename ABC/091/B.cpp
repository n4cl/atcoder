#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, m;
    map<string, int> mp;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(mp.find(s)==mp.end()){
            mp.insert(map<string, int>::value_type(s, 1));
        }else{
            mp[s] += 1;
        }
    }

    cin >> m;
    while(m--){
        cin >> s;
        if(mp.find(s)!=mp.end()){
            mp[s] -= 1;
        }
    }
    int mx = 0;
    for(auto i: mp){
        if(mx<i.second){
            mx = i.second;
        }
    }
    cout << mx << endl;
    return 0;
}
