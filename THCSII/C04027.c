#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int n, dem = 1;
void in(int a[])
{
    printf("Buoc %d: ", dem++);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void solve()
{
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int posi;
    for (int i = 0; i < n - 1; i++)
    {
        int min = 101;
        for (int j = i + 1; j < n; j++)
            if (a[j] < min)
            {
                min = a[j];
                posi = j;
            }
        if (min < a[i] && min < 101)
        {
            a[posi] = a[i];
            a[i] = min;
        }
        in(a);
    }
}

int main()
{
    solve();
}