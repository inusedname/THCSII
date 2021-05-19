#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
#define maxera 10001
int sto[maxera];
void erathos()
{
    sto[0] = 0;
    sto[1] = 0;
    for (int i = 2; i < maxera; i++)
        sto[i] = 1;
    for (int i = 2; i * i <= maxera; i++)
    {
        if (sto[i])
        {
            for (int j = i * i; j < maxera; j += i)
                sto[j] = 0;
        }
    }
}
void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i * 2 <= n; i++)
    {
        if (sto[i] && sto[n - i])
            printf("%d %d ", i, n - i);
    }
}

int main()
{
    erathos();
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        solve();
        printf("\n");
    }
}