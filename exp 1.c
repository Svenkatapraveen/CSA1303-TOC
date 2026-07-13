#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;
    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);
    if (str[0] == 'a' && str[len - 1] == 'a') {
        for (i = 0; i < len; i++) {
            if (str[i] != 'a' && str[i] != 'b') {
                printf("Invalid input! Only 'a' and 'b' are allowed.\n");
                return 0;
            }
        }
        printf("String Accepted.\n");
    } else {
        printf("String Rejected.\n");
    }

    return 0;
}