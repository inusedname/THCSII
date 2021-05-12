#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char s1[100];
    gets(s1);
    char s2[100];
    gets(s2);
    int flag, po = 0;
    char *ans[100];
    char *p = strtok(s1, " ");
    while (p != NULL)
    {
        flag = 0;
        char *tmp = s2;
        char *p2 = strtok(s2, " ");
        while (p2 != NULL)
        {
            if (p == p2)
            {
                flag = 1;
                break;
            }
            p2 = strtok(NULL, " ");
        }
        if (!flag)
        {
            for (int i = 0; i < po; i++)
                if (ans[i] == p)
                {
                    flag = 1;
                    break;
                }
            if (!flag)
                ans[po++] = p;
        }
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < po; i++)
        printf("%s\n", ans[i]);
}

int main()
{
    solve();
}