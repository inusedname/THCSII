#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    if (n % 2)
        printf("0");
    else
    {
        int dem = 1;
        for (int i = 2; i * i < n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    dem++;
                if (n / i % 2 == 0)
                    dem++;
            }
        }
        if (sqrt(n) == (float)sqrt(n))
            if ((int)sqrt(n) % 2 == 0)
                dem++;
        printf("%d", dem);
    }
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