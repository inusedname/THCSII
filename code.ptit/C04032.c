#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int tmp;
int p = 0;
int flag;
struct C04032
{
    int value;
    int freq;
};
struct C04032 ans[100002];
int ktra(int n)
{
    int tmp1 = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 > tmp1)
            return 0;
        tmp1 = n % 10;
        n /= 10;
    }
    return 1;
}
void solve()
{
    while (scanf("%d", &tmp) != -1)
    {
        if (ktra(tmp))
        {
            flag = 0;
            for (int i = 0; i < p; i++)
            {
                if (tmp == ans[i].value)
                {
                    ans[i].freq++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                ans[p].value = tmp;
                ans[p++].freq = 1;
            }
        }
    }
    for (int i = 0; i < p; i++)
        for (int j = i + 1; j < p; j++)
            if (ans[i].freq < ans[j].freq)
            {
                struct C04032 b = ans[i];
                ans[i] = ans[j];
                ans[j] = b;
            }
    for (int i = 0; i < p; i++)
        printf("%d %d\n", ans[i].value, ans[i].freq);
}

int main()
{
    solve();
}