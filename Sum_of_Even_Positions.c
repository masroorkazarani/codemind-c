#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,esum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            esum=esum+a[i];
        }
    }
    printf("%d",esum);
}