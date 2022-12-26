// 자주 사용하는 타입 [void , char , string , bool , int , long long , double , unsigned long long]

#include<bits/stdc++.h>
using namespace std;

int ret = 1;
void a(){ //void -> 리턴하는 값이 없음
    ret = 2;
    cout << ret << '\n';
    return;
}

int main(){
    a();
    return 0;
}