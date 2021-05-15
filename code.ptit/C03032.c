#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
#define maxera 100001
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
    int a, b;
    scanf("%d%d", &a, &b);
    int dem = 0;
    for (int i = a; i <= b; i++)
    {
        if (sto[i])
        {
            int u = i;
            int flag = 1;
            while (u > 0)
            {
                if (sto[u % 10] == 0)
                {
                    flag = 0;
                    break;
                }
                u /= 10;
            }
            if (flag)
                dem++;
        }
    }
    printf("%d", dem);
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