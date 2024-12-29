#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c, result;

int fact(ll a, ll b){
    if (b == 1) return a % c; // b가 1일때 a의 1제곱일 경우

    ll temp = fact(a, b/2);
    result = temp * temp;

    if (b % 2) {
        result = result * a % c;
    }
    return result;
}

int main(){
    cin >> a >> b >> c;
    cout << fact(a , b) << '\n';
    return 0;
}