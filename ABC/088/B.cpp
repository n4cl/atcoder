#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, a, alice, bob;

int main(void) {
    vector<int> vc;
    cin >> n;
    while(n--) {
        cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end(), greater<int>());

    for(int i=0; i < vc.size(); i++){
        if(i%2==0){
            alice+=vc[i];
        }else{
            bob+=vc[i];
        }
    }

    cout <<  alice-bob << endl;
    return 0;
}
