#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin >> n;
    int a = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            a += i + j;
        }
    }
    cout << a << '\n';
    return 0;
}