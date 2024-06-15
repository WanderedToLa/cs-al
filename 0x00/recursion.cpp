#include<bits/stdc++.h>
using namespace std;

// 1! == 0! == 1
int fact(int n){
    if (n == 1 || n == 0) return 1; // 기저사례 작성
    return n * fact(n -1);
}

//F0 = 0 , F1 = 1  Fn = Fn-1 + Fn-2
int fibo(int n){
    if(n == 1 || n == 0) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main(){
    cout << fibo(n) << '\n';
    cout << fact(n) << '\n';
    return 0;
}