#include<bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};
int main(){
    // 배열의 첫번째 값 주소
    int *c = a;

    // c == &a[0]
    cout << c << "\n";
    cout << &a[0] << '\n';

    // c + 1 == &a[1]
    cout << c + 1 << '\n';
    cout << &a[1] << '\n';

    return 0;
}