#include<stdio.h>
struct height
{
    int feet;
    int inch;
};
void main()
{
    struct height h1;struct height h2;struct height h3;
    int a,b;
    h1.feet=3;
    h1.inch=9;
h2.inch=4;
h2.feet=8;
h3.inch=(h1.feet+h2.feet)%12;
b=(h1.inch+h2.inch)/12;
h3.feet=(h1.feet+h2.feet+b);
printf("tower height is %d feet %d inch",h3.feet,b);
}