#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimeter){
    vector<string> ret;
    long long pos = 0;
    string token = "";

    // pos = input.find(delimeter) == 3
    while((pos = input.find(delimeter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }

    ret.push_back(input);
    return ret;
}

int main(){
    string s = "김 우 석";
    string d = " ";
    vector<string> a = split(s, d);
    for (string b : a) cout << b << '\n';

    return 0;
}


// #include <iostream>
// #include <string>

// void print(std::string::size_type n, std::string const &s) {
//   if (n == std::string::npos) {
//     std::cout << "not found\n";
//   } else {
//     std::cout << "found: " << s.substr(n) << '\n';
//   }
// }

// int main() {
//   std::string::size_type n;
//   std::string const s = "This is a string";

//   // s 의 처음 부터 찾는다.
//   n = s.find("is");
//   print(n, s);

//   // s 의 5번째 문자부터 찾는다.
//   n = s.find("is", 5);
//   print(n, s);

//   // 단일 문자 (a) 를 찾는다.
//   n = s.find('a');
//   print(n, s);

//   // 단일 문자 (q) 를 찾는다.
//   n = s.find('q');
//   print(n, s);
// }

// found: is is a string
// found: is a string
// found: a string
// not found