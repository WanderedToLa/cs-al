#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;

int main(){
    cout << a << '\n'; //1.23457
    cout.precision(7); //6자리까지 반올림 후 출력
    cout << a << '\n'; //1.234568
    return 0;
}