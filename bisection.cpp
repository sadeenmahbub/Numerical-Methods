#include <bits/stdc++.h>
using namespace std;

double prevMid=0;
int i=0;



double func(double x)
{
    return ((x*x*x)- (0.165*x*x)+3.993e-4);
}


double error(double mid)
{
    double error = abs(mid-prevMid)/abs(mid);
    return error;

}


void bisection(double upper, double lower)

{
    while(i <= 15) {
    double mid = (upper+lower)/2;
    i++;

    printf("%d\t\t%lf\t\t%lf\t\t%lf\t\t%lf\t\t%lf\n",i, upper, lower, mid, error(mid), func(mid));

    if(func(mid)>0) upper=mid;
    else lower = mid;



    if( error(mid)<=0.01 || func(mid)==0 )
    {
        printf("Answer is %lf\n",mid);
    }

    else
    {

        prevMid=mid;
        //bisection(upper,lower);

    }
    }

}

main()
{
    /*freopen("out.csv","w",stdout);

    for(float i=1;i<10;i+=0.1)
    {
        printf("%0.1f %0.2f\n",i,i*i);
    }*/

    double a,b,upper,lower;
    scanf("%lf %lf",&a,&b);
    if(func(a)>0)
    {
        upper=a;
        lower=b;
    }
    else
    {
        upper=b;
        lower=a;
    }


    bisection(upper,lower);
}
