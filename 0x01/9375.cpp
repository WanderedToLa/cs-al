// 9375 패션왕 신혜빈
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ret;
int T, N;
string C, W;

// for(auto it : mp)
// 범위기반 for루프로 map에 있는 요소들을 순회. key는 first, value는 second로 참조.
// 옷을입지 않은경우 (empty set)까지 포함해서 계산후 -1

int main(){
    cin >> T;

    while(T--) {
        cin >> N;
        // test case별로 map초기화 후 다시 카운팅 혹은 mp.clear()사용해도 됨
        map<string, int> mp;
        for (int i = 0; i < N; i++) {
            cin >> C >> W;
            mp[W]++;
        }
        ret = 1;
        for (auto it : mp) {
            ret *= (long long)it.second + 1;
        }
        ret--;

        cout << ret << "\n";
    }

    return 0;
}