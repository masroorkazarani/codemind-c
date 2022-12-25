#include<stdio.h>
int main(){
    int n,a=0,b=1,c=1;
    scanf("%d",&n);
    while(n>c){
        c=a+b;
        a=b;
        b=c;
    }
        if(n==c) printf("True");
    else printf("False");
}