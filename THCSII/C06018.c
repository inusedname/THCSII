#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
typedef long long ll;
typedef double db;

void solve()
{
    char s1[201], s2[201];
    char s1tok[50][201];
    char ans[50][201];
    int n = 0;
    gets(s1);
    gets(s2);
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
            if (strcmp(p, s1tok[i]) == 0)
                strcpy(s1tok[i], "NULLLU");
        p = strtok(NULL, " ");
    }
    int m = 0, flag;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (strcmp(s1tok[i], "NULLLU") == 0)
            continue;
        for (int j = 0; j < m; j++)
            if (strcmp(s1tok[i], ans[j]) == 0)
            {
                flag = 1;
                break;
            }
        if (!flag)
            strcpy(ans[m++], s1tok[i]);
    }
    char tmp[201];
    for (int i = 0; i < m; i++)
        for (int j = i + 1; j < m; j++)
            if (strcmp(ans[i], ans[j]) > 0)
            {
                strcpy(tmp, ans[i]);
                strcpy(ans[i], ans[j]);
                strcpy(ans[j], tmp);
            }
    for (int i = 0; i < m; i++)
        printf("%s ", ans[i]);
}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        solve();
        printf("\n");
    }
}