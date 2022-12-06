#include<stdio.h>
int main(){
    int n,sqr1,sqr2,sum1=0,sum2=0,rem,rev,e;
    scanf("%d",&n);
    sqr1=n*n;
    while(n!=0){
        rem=n%10;
        sum1=sum1*10+rem;
        n=n/10;
    }
    sqr2=sum1*sum1;
    while(sqr2!=0){
        rev=sqr2%10;
        sum2=sum2*10+rev;
        sqr2=sqr2/10;
    }
    if(sqr1==sum2) printf("True");
    else printf("False");
}