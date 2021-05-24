#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
char s[1001];
int p = 0;
char ans[510][1001];
struct v
{
    char string[1001];
    int freq;
};
void solve()
{
    int max = 0, flag;
    while (scanf("%s", &s) != -1)
    {

        flag = 1;
        for (int i = 0; i < strlen(s) / 2; i++)
            if (s[i] != s[strlen(s) - 1 - i])
            {
                flag = 0;
                break;
            }
        if (flag && strlen(s) >= max)
        {
            max = strlen(s);
            strcpy(ans[p++], s);
        }
    }
    struct v a[510];
    int po = 0;
    int i = 0;
    while (strlen(ans[i]) < max)
        i++;
    for (; i < p; i++)
    {
        flag = 0;
        for (int j = 0; j < po; j++)
            if (strcmp(a[j].string, ans[i]) == 0)
            {
                a[j].freq++;
                flag = 1;
                break;
            }
        if (flag == 0)
        {
            strcpy(a[po].string, ans[i]);
            a[po++].freq = 1;
        }
    }
    for (int i = 0; i < po; i++)
        printf("%s %d\n", a[i].string, a[i].freq);
}

int main()
{
    solve();
}