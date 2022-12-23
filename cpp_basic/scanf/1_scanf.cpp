#include<bits/stdc++.h>
using namespace std;

int a;
double b;
char c;

int main(){
    scanf("%d %lf %c" , &a , &b , &c);
    printf("%d\n" , a);
    printf("%lf\n" , b);
    printf("%c\n" , c);
    return 0;
}

/**
 * scanf 로 받는 형식 주로 입력 형식이 까다롭거나 , 이용할때 scanf사용 보통은 cin
 * d -> int
 * c -> char
 * s -> string
 * lf -> double
 * ld -> long long
 * 
 *  입력
    23330
    233.23123
    a

    출력
    23330
    233.231230
    a
*/