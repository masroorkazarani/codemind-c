#include<stdio.h>
int main(){
    int n,k,m,totpoc;
    scanf("%d%d%d",&n,&k,&m);
    totpoc=k*m;
    if(n%totpoc==0) printf("%d",n/totpoc);
    else printf("%d",(n/totpoc)+1);
}