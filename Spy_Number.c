#include<stdio.h>
int main(){
    int n,rev,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0){
        rev=n%10;
        sum=sum+rev;
        pro=pro*rev;
        n=n/10;
    }
    if(sum==pro) printf("Spy Number");
    else printf("Not Spy Number");
}