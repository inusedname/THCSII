    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    typedef long long ll;
    typedef double db;

    void solve()
    {
        int xa, ya, xb, yb, xc, yc, xd, yd;
        scanf("%d%d%d%d%d%d%d%d", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd);
        int max = 0;
        if (abs(xd - xa) > max)
            max = abs(xd - xa);
        if (abs(xb - xc) > max)
            max = abs(xb - xc);
        if (xb - xa > max)
            max = xb - xa;
        if (xd - xc > max)
            max = xd - xc;
        if (abs(yb - yc) > max)
            max = abs(yb - yc);
        if (abs(ya - yd) > max)
            max = abs(ya - yd);
        if (yb - ya > max)
            max = yb - ya;
        if (yd - yc > max)
            max = yd - yc;
        printf("%d", max * max);
    }

    int main()
    {
        solve();
    }