#include<bits/stdc++.h>
using namespace std;

char b(){ //char 리턴 함수
    char b = 'b';
    return b;
}

int main(){
    char b();
    char c = b();
    char a = 'a'; // 작은 따옴표 사용 , 1바이트의 크기를 가지는 문자 char type
    cout << a << c <<"\n"; 
    return 0;
}