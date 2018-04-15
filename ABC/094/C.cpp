#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int main(void) {
    int n,x;
    vector<int> vc,vt;
    cin >>n;
    REP(i,n){
        cin >>x;
        vc.push_back(x);
        vt.push_back(x);
    }
    sort(vc.begin(),vc.end());
    REP(i,n){
        if(vt[i]<vc[n/2]){
            cout << vc[n/2] << endl;
        }else{
            cout << vc[n/2-1] << endl;
        }
    }
    return 0;
}
