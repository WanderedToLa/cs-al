// 2559 수열
#include<bits/stdc++.h>
using namespace std;

int temp[100004], presum[100004], N, K;

// 입력된 N만큼의 누적합을 구한 후 
// 입력된 K구간에 대한 합이므로 K만큼 뺀 부분부터 K까지의 구간의 합을 구하고 최댓값 비교
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> temp[i];
        presum[i] = presum[i - 1] + temp[i];
    }

    int maxtemp = -10000004;

    for (int i = K; i <= N; i++) {
        maxtemp = max(maxtemp , presum[i] - presum[i - K]);
    }

    cout << maxtemp << "\n";

    return 0;
}