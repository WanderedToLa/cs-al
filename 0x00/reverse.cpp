#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "It's hard to have a sore leg"; 

    reverse(a.begin(), a.end());
    cout << a << '\n';

    reverse(a.begin(), a.end());
    cout << a << '\n';

    // reverse 시작 위치변경
    reverse(a.begin() + 3, a.end());
    cout << a << '\n';

    return 0; 
}