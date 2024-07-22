#include<bits/stdc++.h>
using namespace std;

// 구간"에 대한 많은 "쿼리"가 나올 때 생각해야 될 것은 트리 또는 누적합
int a[100004], n, m, psum[100004], b, c;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;

    for (int i = 1; i < n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b >> c;
        cout << psum[c] - psum[b - 1] << '\n';
    }

    return 0;
}