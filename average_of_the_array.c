#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    float avg;
    avg=sum/n;
    printf("%0.2f",avg);
}