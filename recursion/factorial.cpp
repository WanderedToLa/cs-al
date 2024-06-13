#include<bits/stdc++.h>
using namespace std;

// 1! == 0! == 1
int fact(int n){
    if (n == 1 || n == 0) return 1; // 기저사례 작성
    return n * fact(n -1);
}

int n = 5;
int main(){
    cout << fact(n) << '\n';
    return 0;
}