#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct hs
{
    char name[50];
    float a, b, c;
    int stt;
};

void solve()
{
    struct hs A[100];
    int p = 0;
    int function;
    int how;
    int where;
    while (1)
    {
        scanf("%d", &function);
        if (function == 1)
        {
            scanf("%d", &how);
            printf("%d\n", how);
            while (p < how)
            {
                getchar();
                gets(A[p].name);
                scanf("%f%f%f", &A[p].a, &A[p].b, &A[p].c);
                A[p].stt = p + 1;
                p++;
            }
        }
        if (function == 2)
        {
            scanf("%d", &where);
            printf("%d\n", where);
            where--;
            getchar();
            gets(A[where].name);
            scanf("%f%f%f", &A[where].a, &A[where].b, &A[where].c);
        }
        if (function == 3)
        {
            for (int i = 0; i < p; i++)
                if (A[i].a < A[i].b && A[i].b < A[i].c)
                    printf("%d %s %.1f %.1f %.1f\n", A[i].stt, A[i].name, A[i].a, A[i].b, A[i].c);
            break;
        }
    }
}

int main()
{
    solve();
}