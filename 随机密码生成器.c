#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 0, count = 0;
    srand(time(NULL));
    printf("请输入的生成的密码的长度");
    scanf_s("%d", &n);
    for (count = 1; count <= n; count++) {
        int a = rand() % 2;
        if (a) {
            char letter[] = "abcdefghijklmnopqrstuvwxyz";
            int m = rand() % 26;
            printf("%c", letter[m]);
        }
        else {
            int num = rand() % 10;
            printf("%d", num);
        }
    }
    return 0;
}