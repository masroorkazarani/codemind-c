#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int k,c=0;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k==a[i]) c=c+1;
    }
    if(c>0) printf("True");
    else printf("False");
}