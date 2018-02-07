#include <iostream>

using namespace std;

int main() {
    int x, a, b;
    cin >>x >>a >>b;
    // 手持ちからケーキの料金を引く
    x -= a;

    /*
       残金から買える分だけのドーナツを引く
       MEMO: 普通に余りを求めるだけで良かった
       x % b で良かった
    */
    cout << x - (b * (x / b)) << endl;

    return 0;
}
