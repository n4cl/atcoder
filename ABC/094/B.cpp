#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n, m, x, a;
    vector<int> vu;
    vector<int> vd;
    cin >>n >>m >>x;
    REP(i,m){
        cin >>a;
        if(x>a){
            vd.push_back(a);
        }else{
            vu.push_back(a);
        }
    }
    int ans;
    if(vd.size()>vu.size()){
        ans=vu.size();
    }else{
        ans=vd.size();
    }
    cout << ans << endl;
    return 0;
}
