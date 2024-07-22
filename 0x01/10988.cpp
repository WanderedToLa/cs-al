#include<bits/stdc++.h>
using namespace std;

string str, reversestr;

int main(){
    cin >> str;

    reversestr = str;
    reverse(reversestr.begin(), reversestr.end());

    if (str == reversestr) cout << 1 << '\n';
    else cout << 0 << '\n';

    return 0;
}