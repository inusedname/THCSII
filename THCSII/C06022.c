#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
typedef long long ll;
typedef double db;
int dem = 1;

void solve()
{
    char s1[201], s2[21];
    char s1tok[50][201];
    int n = 0;
    gets(s1);
    gets(s2);
    for (int i = 0; i < strlen(s2); i++)
        s2[i] = tolower(s2[i]);
    printf("Test %d: ", dem++);
    char *p = strtok(s1, " ");
    while (p != NULL)
    {
        strcpy(s1tok[n++], p);
        p = strtok(NULL, " ");
    }
    p = strtok(s2, " ");
    while (p != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            char tmp[201];
            strcpy(tmp, s1tok[i]);
            for (int i = 0; i < strlen(tmp); i++)
                tmp[i] = tolower(tmp[i]);
            if (strcmp(p, tmp) == 0)
                strcpy(s1tok[i], "NULLLU");
        }
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
        if (strcmp(s1tok[i], "NULLLU"))
            printf("%s ", s1tok[i]);
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        solve();
        printf("\n");
    }
}