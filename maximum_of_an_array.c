#include<stdio.h>
int main(){
    int n,fc;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fc=a[0];
    for(int i=0;i<n;i++)
    {
        if(fc<a[i])
        {
            fc=a[i];
        }
    }
    printf("%d",fc);
}