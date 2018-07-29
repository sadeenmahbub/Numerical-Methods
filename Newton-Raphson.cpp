#include <bits/stdc++.h>
using namespace std;

double prevX=0;
int i=0;



double func(double x)
{
    return (x-4)*(x-4)*(x+2);
}

double funcderi(double x)
{
    return 3*x*x-12*x;
}


double error(double xi)
{
    double error = abs(xi-prevX)/abs(xi);
    return error;

}


void newton_raphson(double xi)

{

    i++;

    double f = func(xi);
    double fd = funcderi(xi);

    printf("%d\t\t%lf\t\t%lf\t\t%lf\t\t\t\t\t\t%lf\n",i, xi, f, fd, error(xi));



    if( error(xi)<=0.0001 || func(xi)==0 )
    {
        printf("Answer is %lf\n",xi);
    }

    else
    {

        prevX=xi;
        xi = xi - (f/fd);
        newton_raphson(xi);

    }

}

main()
{
    /*freopen("out.csv","w",stdout);

    for(float i=1;i<10;i+=0.1)
    {
        printf("%0.1f %0.2f\n",i,i*i);
    }*/

    double a;
    scanf("%lf",&a);



    newton_raphson(a);
    return 0;
}
