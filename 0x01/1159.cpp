#include<bits/stdc++.h>
using namespace std;

int n, arr[26];
string name, first;

int main(){
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        arr[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        // 숫자를 다시 알파벳으로 변경
        if (arr[i] >= 5) first += i + 'a';
    }

    if (first.size()) {
        cout << first << '\n';
    } else {
        cout << "PREDAJA" << '\n';
    }

    return 0;
}