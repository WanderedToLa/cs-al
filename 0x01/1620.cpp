// 1620 포켓몬 마스터 이다솜
#include<bits/stdc++.h>
using namespace std;

int N, M;
string pocketmons;
map<string, int> mp;
map<int, string> mp2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> pocketmons;

        // Pikachu : 1 과 같이 인덱스와 함께 map저장
        mp[pocketmons] = i;
        mp2[i] = pocketmons;
    }

    for (int i = 1; i <= M; i++) {
        cin >> pocketmons;

        if (atoi(pocketmons.c_str()) == 0) {
            cout << mp[pocketmons] << "\n";
        } else {
            cout << mp2[atoi(pocketmons.c_str())] << "\n";
        }
    }


    return 0;
}