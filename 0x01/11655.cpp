#include<bits/stdc++.h>
using namespace std;

string str;

int main(){
    // 공백도 포함해서 입력받음
    getline(cin , str);

    for (int i = 0; i < str.size(); i++) {
        // 대문자
        if (str[i] >= 65 && str[i] <= 90){
            // 13번 이동했을 때 대문자 아스키코드 초과시 A부터 다시 시작
            if(str[i] + '\r' > 90) str[i] = str[i] + '\r' - 26;
            else str[i] = str[i] + '\r';

        // 소문자
        } else if (str[i] >= 97 && str[i] <= 122){
            if(str[i] + '\r' > 122) str[i] = str[i] + '\r' - 26;
            else str[i] = str[i] + '\r';
        }

        cout << str[i];
    }


    return 0;
}