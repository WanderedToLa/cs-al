// 3986 좋은 단어
#include<bits/stdc++.h>
using namespace std;

int N, sum, cnt;
string goodword;
// A와 B로만 이루어진 문자열 단어와의 거리가 0이거나 짝수일경우 서로 간섭하지않음
// 교차하지 않는경우 -> stack
int main() {
    cin >> N;

   for (int i = 0; i < N; i++) {
        cin >> goodword;
        stack<char> stk;
        
        for (char a : goodword) {
            // 현재 a값과 비교후 같다면 stk.top() 제거 아니라면 그대로 push
            if (stk.size() && stk.top() == a) {
                stk.pop();
            } else {
                stk.push(a);
            }
        }
        
        if (stk.empty()) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}