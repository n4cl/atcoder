#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, cnt, ans;
    string s;
    array<int, 26> w;
    ans = 0;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        w = {0};
        cnt = 0;
        for(int j = 0; j < i + 1; j++){
            for(int k = i + 1; k < n; k++){
                if(s[j] == s[k]) w[s[j]-'a'] = 1;
            }
        }
        for(int j = 0; j < 26; j++){
            if(w[j] == 1) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
