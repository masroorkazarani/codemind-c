#include<stdio.h>
int main(){
    int n,rem,sum=0,pro=1,diff;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    if(pro>sum) printf("%d",pro-sum);
    else printf("%d",sum-pro);
}