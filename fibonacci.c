#include<stdio.h>
int main(){
    int n,a=0,b=1,c=1;
    scanf("%d",&n);
    while(n!=0){
        n--;
        printf("%d ",a);
        a=b;
        b=c;
        c=a+b;
        
    }
}