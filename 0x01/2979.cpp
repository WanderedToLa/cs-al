#include<bits/stdc++.h>
using namespace std;

int A, B, C, a, b, arr[104], sum;
int main(){
    cin >> A >> B >> C;

    // counting 배열
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            arr[j]++;
        }
    }

    for (int i = 0; i < 100; i++) {
        if (arr[i]) {
            if (arr[i] == 1) {
                sum += A;
            } else if (arr[i] == 2) {
                sum += B * 2;
            } else if (arr[i] == 3) {
                sum += C * 3;
            }
        }
    }

    cout << sum << '\n';
    return 0;

}