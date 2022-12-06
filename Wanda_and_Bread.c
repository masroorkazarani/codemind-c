#include<stdio.h>
int main(){
    int n,m,k,num;
    scanf("%d%d%d",&n,&m,&k);
    num=m*k;
    if(num>=n) printf("YES");
    else printf("NO");
}