#include stdio.h
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define TRUE_VALUE 14.7802

FILE *fp;

double func(double c)
{
    double g = 9.8;
    double m = 68.1;
    double t = 10.0;
    double v = 40.0;
    return (((g*m)/c)*(1-exp(-(c/m)*t))) - v;
}

double bs(double lo, double hi)
{
    double prev, present, f, relative_true_error, relative_approx_error;
    int cnt = 1;
    prev = (hi+lo)/2.0;
    f = func(prev);
    relative_true_error = fabs(TRUE_VALUE-prev)*100.000/TRUE_VALUE;
    fprintf(fp, "Iteration\t\t  Xl\t\t\t    Xu\t\t\t    Xr\t    Relative Approximate Error\t    Relative True Error\n");
    cnt++;

    if(!f) return prev;
    else if(f*func(hi) > 0)
















}
