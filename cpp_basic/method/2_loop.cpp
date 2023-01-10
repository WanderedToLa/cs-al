#include<bits/stdc++.h>
using namespace std;

string a[2] = {"out of time" , "i love you"};
int main(){
    for(string b : a) cout << b << '\n'; // for of와 비슷한듯

    for(int i = 0; i < 2; i++) cout << a << "\n";
    return 0;
}