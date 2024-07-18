#include<bits/stdc++.h>
using namespace std;

// 주소값을 담은 포인터 b에 역참조연산(*)을 통해 원래의 변수 값 참조
int main(){
    string a = "wooseok";
    string *b = &a;

    // 0x16b84b2f0
    cout << b << '\n';
    // "wooseok"
    cout << *b << '\n';

    return 0;
}