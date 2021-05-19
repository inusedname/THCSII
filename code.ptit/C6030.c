#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
char s[1000000];
char tmp[1000000];
struct u
{
    char string[1001];
    int freq;
};
void solve()
{
    gets(s);
    strcpy(tmp, s);
    int max = 0;
    char *p = strtok(tmp, " ");
    while (p != NULL)
    {
        if (strlen(p) > max)
            max = strlen(p);
        p = strtok(NULL, " ");
    }
    int po = 0;
    p = strtok(s, " ");
    struct u ans[1005];
    while (p != NULL)
    {
        if (strlen(p) == max)
        {
            int flag = 0;
            for (int i = 0; i < po; i++)
            {
                if (strcmp(ans[i].string, p) == 0)
                {
                    ans[i].freq++;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                strcpy(ans[po].string, p);
                ans[po++].freq = 1;
            }
        }
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < po; i++)
        printf("%s %d %d\n", ans[i].string, max, ans[i].freq);
}

int main()
{
    solve();
}