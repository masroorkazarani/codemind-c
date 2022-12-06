#include<stdio.h>
int main(){
    int a,b,tot;
    scanf("%d%d",&a,&b);
    tot=21-(a+b);
    if(tot>10) printf("-1");
    else printf("%d",tot);
}