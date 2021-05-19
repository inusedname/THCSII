#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct C07012
{
    char name[50];
    char type[50];
    double spare;
    int stt;
};

void solve()
{
    int n;
    double j, k;
    scanf("%d", &n);
    struct C07012 a[n], b;
    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(a[i].name);
        gets(a[i].type);
        scanf("%lf%lf", &j, &k);
        a[i].spare = k - j;
        a[i].stt = i + 1;
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].spare < a[j].spare)
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.2lf\n", a[i].stt, a[i].name, a[i].type, a[i].spare);
}

int main()
{
    solve();
}