#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct hs
{
    char name[50];
    char birth[50];
    float a;
    float b;
    float c;
    float sum;
};
void solve()
{
    int n;
    scanf("%d", &n);
    struct hs list[n];
    getchar();
    float max = 0;
    for (int i = 0; i < n; i++)
    {
        gets(list[i].name);
        gets(list[i].birth);
        scanf("%f%f%f", &list[i].a, &list[i].b, &list[i].c);
        getchar();
        list[i].sum = list[i].a + list[i].b + list[i].c;
        if (list[i].sum > max)
            max = list[i].sum;
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i].sum == max)
            printf("%d %s %s %.1f\n", i + 1, list[i].name, list[i].birth, list[i].sum);
    }
}

int main()
{
    solve();
}