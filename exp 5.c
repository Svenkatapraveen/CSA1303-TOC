#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, i;
    int leftZeros = 0, rightZeros = 0, flag = 1;
    printf("Enter a binary string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1') {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 0;
        }
    }
    i = 0;
    while (i < len && str[i] == '0') {
        leftZeros++;
        i++;
    }
    while (i < len && str[i] == '1') {
        i++;
    }
    while (i < len && str[i] == '0') {
        rightZeros++;
        i++;
    }
    if (i != len)
        flag = 0;
    if (leftZeros != rightZeros)
        flag = 0;
    if (flag)
        printf("String belongs to the CFG.\n");
    else
        printf("String does not belong to the CFG.\n");

    return 0;
}