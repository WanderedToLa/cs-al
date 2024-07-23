#include<bits/stdc++.h>
using namespace std;

/*
find: 찾으려는 문자의 위치 return
substr(pos, npos): pos의 위치부터 npos까지의 문자열 return npos가 없을경우
문자열 끝까지 return 
size: abcde 라면 size는 5 return

*/

int N;
string pattern, files;

int main(){
    cin >> N;
    cin >> pattern;

    int a = pattern.find("*"); // 2
    string pre = pattern.substr(0, a); 
    string suf = pattern.substr(a + 1);

    for (int i = 0; i < N; i ++) {
        cin >> files;

       if (pre.size() + suf.size() > files.size()) {
            cout << "NE" << '\n';
       } else {
            if (pre == files.substr(0, pre.size()) && suf == files.substr(files.size() - suf.size())) {
                cout << "DA" << '\n';
            } else {
                cout << "NE" << '\n';
            }
       }
    }
    
    return 0;
}