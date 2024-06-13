#include<bits/stdc++.h>
using namespace std;

// 오름차순 기반의 순열
// 매개변수로 순열의 범위를 가르키는 [first , last] 순열을 시작할 첫번째 주소 , 포함되지 않는 마지막 주소
void printV(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    };
    cout << "\n";
}

int main(){
    int a[3] = {1 , 2 , 3};
    vector<int> v;
    for(int i = 0; i < 3; i++)v.push_back(a[i]);
    do {
        printV(v);
    }while(next_permutation(v.begin() , v.end()));
    cout << "-------------" << '\n';
    v.clear();
}