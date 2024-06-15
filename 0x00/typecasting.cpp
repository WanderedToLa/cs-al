#include<bits/stdc++.h>
using namespace std;

// !!!!!!!!!!같은 타입끼리 연산!!!!!!!!!!
int main()
{
    double ret = 2.12345;
    int n = 2;
    int a = (int)round(ret / double(n));
    cout << a << '\n';

    return 0;
}