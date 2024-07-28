#include<bits/stdc++.h>
using namespace std;

int N, M, num[100004], cnt;

int main() {
    cin >> N;
    cin >> M;
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (num[i] + num[j] == M) {
                cnt++;
            }
        }
    }
    
    cout << cnt << "\n";
  
    return 0;
}