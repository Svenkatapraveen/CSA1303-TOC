#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    int n = strlen(s);
    if (s[0] == 'b' && s[n - 1] == 'a')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}