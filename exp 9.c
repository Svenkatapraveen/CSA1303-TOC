#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    printf("Enter the binary string: ");
    scanf("%s", s);
    int n = strlen(s);
    if (s[0] == '0' && s[n - 1] == '1')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}