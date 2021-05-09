#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int sto[10001];
void erathos()
{
    int n = 10001;
    sto[0] = 0;
    sto[1] = 0;
    for (int i = 2; i < n; i++)
        sto[i] = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (sto[i])
        {
            for (int j = i * i; j < n; j += i)
                sto[j] = 0;
        }
    }
}
void solve()
{
    erathos();
    int n, tmp, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &tmp);
            if (j >= i && sto[tmp])
                sum += tmp;
        }
    }
    printf("%d", sum);
}

int main()
{
    solve();
}