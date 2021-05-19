#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct u
{
    char string[1001];
    int freq;
};
void solve()
{
    char a[1003][100];
    char s[100];
    int max = 0, po = 0;
    while (scanf("%s", s) != -1)
    {
        strcpy(a[po++], s);
        if (strlen(s) > max)
            max = strlen(s);
    }
    struct u ans[1003];
    int p = 0;
    for (int i = 0; i < po; i++)
    {
        if (strlen(a[i]) == max)
        {
            int flag = 0;
            for (int j = 0; j < p; j++)
                if (strcmp(ans[j].string, a[i]) == 0)
                {
                    ans[j].freq++;
                    flag = 1;
                    break;
                }
            if (!flag)
            {
                strcpy(ans[p].string, a[i]);
                ans[p++].freq = 1;
            }
        }
    }
    for (int i = 0; i < p; i++)
        printf("%s %d %d\n", ans[i].string, max, ans[i].freq);
}

int main()
{
    solve();
}