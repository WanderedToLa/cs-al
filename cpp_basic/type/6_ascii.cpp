#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "123";
    s[0]++;
    cout << s << '\n'; //223
    return 0;
}

// 문자열의 연산은 아스키 코드를 기반으로 함.