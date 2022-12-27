#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "love is";
    a += " pain!";
    a.pop_back();
    cout << a << " : " << a.size() << "\n";
    cout << char(* a.begin()) << '\n';
    cout << char(* (a.end() - 1)) << '\n';
    // string & insert (size_t pos, const string& str);
    a.insert(0 , "test ");
    cout << a << " : " << a.size() << "\n";
    // string & erase (size_t pos = 0, size_t len = npos);
    a.erase(0 , 5);
    cout << a << " : " << a.size() << "\n";
    // size_t find (const string& str, size_t pos = 0);
    auto it = a.find("love");
    if (it != string::npos){
        cout << "include love" << '\n';
    }
    // string substr (size_t pos = 0, size_t len = npos) const;
    cout << it << '\n';
    cout << string::npos << '\n';
    cout << a.substr(5 , 2) <<  '\n';

    return 0;
}

/** 
love is pain : 12
l
n
test love is pain : 17
love is pain : 12
include love
0
18446744073709551615
is
*/