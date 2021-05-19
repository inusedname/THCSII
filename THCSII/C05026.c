#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int sto[1001];
void erathos()
{
    int n = 1001;
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
    int n;
    int max = 0;
    int posi, how, tmp;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        how = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &tmp);
            if (sto[tmp])
                a[how++] = tmp;
        }
        if (how > max)
        {
            posi = i;
            max = how;
            for (int z = 0; z < how; z++)
                b[z] = a[z];
        }
    }
    printf("%d\n", posi + 1);
    for (int i = 0; i < max; i++)
        printf("%d ", b[i]);
}

int main()
{
    solve();
}