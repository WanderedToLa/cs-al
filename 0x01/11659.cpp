// 11659 구간 합4
#include<bits/stdc++.h>
using namespace std;

int N, M, num, d, d2, presum[100004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 1; i <= N; i++){
        cin >> num;
        presum[i] = presum[i - 1] + num;
    }
    for (int i = 0; i < M; i++) {
        cin >> d >> d2;
        cout << presum[d2] - presum[d - 1] << "\n";
    }

    return 0;
}