#include <stdio.h>
#include <string>
using namespace std;
#pragma warning(disable:4996)

int main() {
    char a[100];
    char b[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    scanf("%s", a); // a �� �ޱ�

    for (int i = 0; i < strlen(a); i++) {
        int found = 0;

        for (int j = 0; j < 26; j++) {
            if (a[i] == b[j]) {
                printf("%d ", j); // ��ġ�ϴ� ������ �ε��� ���
                found = 1;
                break; // ��ġ�ϴ� ���ڸ� ã���� �� �̻� ������ �ʰ� ������ ����
            }
        }

        if (!found) {
            printf("-1 "); // ��ġ�ϴ� ���ڰ� ������ -1 ���
        }
    }

    return 0;
}