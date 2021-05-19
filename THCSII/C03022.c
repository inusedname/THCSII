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
int ktra(int i)
{
    int sum = 0;
    while (i > 0)
    {
        sum += i % 10;
        i /= 10;
    }
    if (sum % 5)
        return 0;
    return 1;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    for (int i = 5; i < n; i++)
        if (nto(i) && ktra(i))
        {
            printf("%d ", i);
            dem++;
        }
    printf("\n%d", dem);
}

int main()
{
    solve();
}