    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    typedef long long ll;
    typedef double db;

    void solve()
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        int num = 1;
        int spec = 0;
        while (num <= n * m)
        {
            for (int i = spec; i < m - spec; i++)
            {
                if (num > n * m)
                    break;
                printf("%d ", a[spec][i]);
                num++;
            }
            for (int i = spec + 1; i < n - spec; i++)
            {
                if (num > n * m)
                    break;
                printf("%d ", a[i][m - 1 - spec]);
                num++;
            }
            for (int i = m - 2 - spec; i >= spec; i--)
            {
                if (num > n * m)
                    break;
                printf("%d ", a[n - 1 - spec][i]);
                num++;
            }
            for (int i = n - 2 - spec; i >= spec + 1; i--)
            {
                if (num > n * m)
                    break;
                printf("%d ", a[i][spec]);
                num++;
            }
            spec++;
        }
    }

    int main()
    {
        int t;
        scanf("%d", &t);
        while (t--)
        {
            solve();
            printf("\n");
        }
    }