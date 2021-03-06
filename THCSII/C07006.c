#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
double lngth(double ax, double ay, double bx, double by)
{
    return sqrt(((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by)));
}
void solve()
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
    double AB = lngth(ax, ay, bx, by);
    double AC = lngth(ax, ay, cx, cy);
    double BC = lngth(bx, by, cx, cy);
    if (AB + AC <= BC || AB + BC <= AC || AC + BC <= AB)
        printf("INVALID");
    else
    {
        double s = sqrt(AB + BC + AC) * sqrt(AB + BC - AC) * sqrt(AC + BC - AB) * sqrt(AB + AC - BC);
        s = s / 4;
        printf("%.2lf", s);
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