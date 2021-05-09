#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void solve()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    int i = 0;
    while (n > 0)
    {
        if (n >= a[i])
        {
            dem += n / a[i];
            n %= a[i];
        }
        i++;
    }
    printf("%d", dem);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();
        printf("\n");
    }
}