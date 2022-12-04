#include<stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
void main()
{
    struct time h1,h2,h3;struct time m3,m1,m2;struct time s1,s2,s3;
    int a,b;
    h1.hours=3;
    m1.minutes=23;
    s1.seconds=43;
    h2.hours=2;
    m2.minutes=53;
    s2.seconds=50;
    s3.seconds=(s1.seconds+s2.seconds)%60;
    a=(s1.seconds+s2.seconds)/60;
    m3.minutes=(m1.minutes+m2.minutes+a)%60;
    b=(m1.minutes+m2.minutes+a)/60;
    h3.hours=(h1.hours+h2.hours+b);
    printf("the time is %d hours %d minutes %d seconds",h3.hours,m3.minutes,s3.seconds);
}