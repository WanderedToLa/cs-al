#include<bits/stdc++.h>
using namespace std;

double a(){ // 함수를 선언할때는 항상 호출되는 위 부분에 선언함.
    return 1.23333;
}

int main(){
    double ret = a();
    cout << ret << '\n';
    return 0;
}

// double a() 선언과 정의를 한번에 함

// int main(){
//     double ret = a();
//     cout << ret << '\n';
//     return 0;
// }

// double a(){
//   return 1.23333;
//}