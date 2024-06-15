#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> aa = {2,1,3};
  sort(aa.begin(), aa.end());

  int a[] = {1,2,3};
  do {
    // for (int i = 0; i < 2; i++) { 순서와 상관있이 2개를 뽑는경우
    //     cout << a[i] << " ";
    // }
    // cout << '\n';
    for (int i : a) cout << i << "";
    cout << '\n';
  } while (next_permutation(&a[0], &a[0] + 3)); // a, a + 3
  // } while (next_permutation(aa.begin(), a.end())) 벡터일 경우
}