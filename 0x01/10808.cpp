#include<bits/stdc++.h>
using namespace std;

// 컴파일러에서 배열값을 0으로 최적화 함
int a[26];
string str;

int main(){
    cin >> str;
    for (char i : str) {
        a[i - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }
  
    return 0;
}