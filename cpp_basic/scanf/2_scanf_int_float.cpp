#include<bits/stdc++.h>
using namespace std;

int a , b;
double c;

int main(){
    scanf("%d.%d" , &a , &b); // 3.22
    printf("\n%d %d\n" , a , b); //3 22

    scanf("%lf" , &c); // 3.22
    printf("%lf\n" , c); // 3.220000
    return 0;
}

/**
 * double 타입으로 받지 않고 int 두개로 받음
 * 실수 타입의 연산이 까다롭기 때문에 double을 사용하지 않고
 * 정수 두개를 입력받는 방식으로 계산 유도
*/