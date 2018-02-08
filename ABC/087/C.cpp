#include <iostream>

using namespace std;

int main() {
    int n;
    cin >>n;

    int a1[n], a2[n];

    for(int i=0;i<n;i++){
        cin >> a1[i];
    }
    for(int i=0;i<n;i++){
        cin >> a2[i];
    }
    int tmp, ans=0;
    for(int i=0;i<n;i++){
        tmp=0;
        for(int j=0;j<n;j++){
            if(i==j){
                tmp=tmp+a1[j]+a2[j];
            }else if(i<j){
                tmp+=a2[j];
            }else{
                tmp+=a1[j];
            }
        }
        ans=max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}
