#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main(){
    int R[MAX], n;

    cin >> n;
    for(int i = 0;i < n; i++) cin >> R[i];

    int maxv = -2000000000; // R[i]が取りうる最大値-最小値で初期化
    int minv = R[0];        // 入力の最初の値で初期化

    for(int i = 1; i < n; i++){
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;

    return 0;
}