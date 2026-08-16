#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;
    int zeros = 0, ones = 0;
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
        zeros++;
        i++;
    }
    while (i < len && str[i] == '1') {
        ones++;
        i++;
    }
    if (i != len) {
        printf("String does not belong to the CFG.\n");
        return 0;
    }
    if (zeros == ones)
        printf("String belongs to the CFG.\n");
    else
        printf("String does not belong to the CFG.\n");

    return 0;
}