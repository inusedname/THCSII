#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

int convert(char s[])
{
    int sum = 0;
    int step = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        sum = (s[i] - '0') * (pow(10, step)) + sum;
        step++;
    }
    return sum;
}
char s[1000000];
void solve()
{
    int freq[10005] = {0};
    int coso, luythua;
    gets(s);
    int max = 0;
    int flag = 0;
    char *p = strtok(s, "*x^ +");
    while (p != NULL)
    {
        coso = convert(p);
        p = strtok(NULL, "*x^ +");
        luythua = convert(p);
        p = strtok(NULL, "*x^ +");
        if (freq[luythua] == 0)
            max++;
        freq[luythua] += coso;
    }
    gets(s);
    flag = 0;
    p = strtok(s, "*x^ +");
    while (p != NULL)
    {
        coso = convert(p);
        p = strtok(NULL, "*x^ +");
        luythua = convert(p);
        p = strtok(NULL, "*x^ +");
        if (freq[luythua] == 0)
            max++;
        freq[luythua] += coso;
    }
    int c = 1;
    for (int i = 10000; i >= 0; i--)
    {
        if (freq[i])
        {
            printf("%d*x^%d", freq[i], i);
            if (c++ < max)
                printf(" + ");
        }
    }
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