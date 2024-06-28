#include <stdio.h>
#include <string>
using namespace std;
#pragma warning(disable:4996)

int main() {
    char a[100];
    char b[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    scanf("%s", a); // a 값 받기

    for (int i = 0; i < strlen(a); i++) {
        int found = 0;

        for (int j = 0; j < 26; j++) {
            if (a[i] == b[j]) {
                printf("%d ", j); // 일치하는 문자의 인덱스 출력
                found = 1;
                break; // 일치하는 문자를 찾으면 더 이상 비교하지 않고 루프를 종료
            }
        }

        if (!found) {
            printf("-1 "); // 일치하는 문자가 없으면 -1 출력
        }
    }

    return 0;
}