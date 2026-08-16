#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;
    printf("Enter a binary string: ");
    scanf("%s", str);
    len = strlen(str);
    if (len < 2) {
        printf("String does NOT belong to the language.\n");
        return 0;
    }
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1') {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 0;
        }
    }
    if (str[0] == '0' && str[len - 1] == '1')
        printf("String belongs to the language.\n");
    else
        printf("String does NOT belong to the language.\n");

    return 0;
}