#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n],b[n],i;
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
        sum=a[i]+b[i];
        printf("%d
",sum);
    }
}