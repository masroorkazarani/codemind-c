#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,area;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
    return 0;
}