#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int nto(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int dem;
    int u = n;
    printf("%d = ", n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (nto(i))
            if (n % i == 0)
            {
                dem = 0;
                int tmp = n;
                while (tmp % i == 0)
                {
                    dem++;
                    tmp /= i;
                    u /= i;
                }
                printf("%d^%d", i, dem);
                if (u > 1)
                    printf(" * ");
            }
    }
    if (u > 1)
        printf("%d^1", u);
    else if (n == 1)
        printf("1^1");
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