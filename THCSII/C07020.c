#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct C07020
{
    char name[50];
    int exp;
    int remain;
    int levelup;
};

void solve()
{
    int n;
    int max = 0;
    scanf("%d", &n);
    int dem = 0;
    struct C07020 a[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(a[i].name);
        scanf("%d%d", &a[i].exp, &a[i].remain);
        a[i].levelup = 0;
        while (a[i].exp <= a[i].remain)
        {
            int lv = a[i].remain / a[i].exp;
            a[i].remain %= a[i].exp;
            a[i].remain += lv * 2;
            a[i].levelup += lv;
        }
        dem += a[i].levelup;
        if (a[i].levelup > max)
            max = a[i].levelup;
    }
    printf("%d\n", dem);
    for (int i = 0; i < n; i++)
    {
        if (a[i].levelup == max)
        {
            printf("%s", a[i].name);
            return;
        }
    }
}

int main()
{
    solve();
}