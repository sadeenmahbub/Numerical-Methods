#include <bits/stdc++.h>
using namespace std;

double prevxinext=0;
int i=0;



double func(double x)
{
    return (x-4)*(x-4)*(x+2);
}


double error(double xi)
{
    double error = abs(xi-prevxinext)/abs(xi);
    return error;

}


void secant_method(double xiprev, double xi)

{
    double fiprev = func(xiprev);
    double fi = func(xi);
    double xinext = xi - ((fi*(xi-xiprev))/(fi-fiprev));
    i++;

    printf("%d\t\t%lf\t\t%lf\t\t%lf\t\t%lf\t\t%0.14lf\n",i, xiprev, xi, xinext, error(xi), func(xinext));


    if( error(xi)<=0.01 || func(xinext)==0 )
    {
        printf("Answer is %lf\n",xinext);
    }

    else
    {

        prevxinext=xi;
        xiprev = xi;
        xi = xinext;
        secant_method(xiprev,xi);

    }

}

main()
{
    /*freopen("out.csv","w",stdout);

    for(float i=1;i<10;i+=0.1)
    {
        printf("%0.1f %0.2f\n",i,i*i);
    }*/

    double a,b,xiprev,xi;
    scanf("%lf %lf",&a,&b);
    if(a<b)
    {
        xiprev=a;
        xi=b;
    }
    else
    {
        xiprev=b;
        xi=a;
    }


    secant_method(xiprev,xi);
}
