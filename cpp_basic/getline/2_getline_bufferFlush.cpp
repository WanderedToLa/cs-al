#include<bits/stdc++.h>
using namespace std;

int T;
string s;

int main(){
    cin >> T;
    string bufferflush;
    getline(cin , bufferflush);
    for(int i = 0; i < T; i++){
        getline(cin , s);
        cout << s << "\n";
    }
    return 0;
}
/**
 * getline을 여러번 입력 받아야 할 경우 bufferFlush 사용
*/