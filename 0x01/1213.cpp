// 1213 팰린드롬 만들기
#include<bits/stdc++.h>
using namespace std;

// &1 -> 2진수 홀짝 검사
// int a = 5; 이진수로 101
// int b = 3; 이진수로 011
// int result = a & b;

// 연산 과정:
//   101 (5)
// & 011 (3)
// -------
//   001 (1)

string pal, result;
char midword;
int arr[200], flag;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> pal;

    for (char s : pal) {
        arr[s]++;
    }

    for (int i = 'Z'; i >= 'A'; i--){ //오름차순 정렬
        if (arr[i]) {
            if (arr[i] & 1) { // 단어가 홀수 개일때 가운데
                midword = char(i);
                flag++;
                arr[i]--;
            }
            if (flag == 2) break;

            for (int j = 0; j < arr[i]; j += 2) {
                result = char(i) + result; // C + "" 앞
                result += char(i); // C + C 뒤
            }
        }
    }

    // 홀수일 경우 문자열 시작지점부터 result.size() / 2 한 문자열 중간에 midword 삽입함
	if(midword) result.insert(result.begin() + result.size() / 2, midword);
    if (flag == 2) {
        cout << "I'm Sorry Hansoo\n";
    } else {
        cout << result << "\n";
    }  

    return 0;
}