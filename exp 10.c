#include <stdio.h>
int n, e[10][10], visited[10];
void eclosure(int s)
{
    printf("%d ", s);
    visited[s] = 1;
    for (int i = 0; i < n; i++)
    {
        if (e[s][i] == 1 && !visited[i])
            eclosure(i);
    }
}
int main()
{
    printf("Enter number of states: ");
    scanf("%d", &n);
    printf("Enter epsilon transition matrix (0/1):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &e[i][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            visited[j] = 0;

        printf("E-Closure(%d) = { ", i);
        eclosure(i);
        printf("}\n");
    }

    return 0;
}