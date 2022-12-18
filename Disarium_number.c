#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,s=0,c=0,temp,num;
    scanf("%d",&n);
    temp=n;
    num=n;
    while(n!=0){
        c++;
        n=n/10;
    }
    while(temp!=0){
        rem=temp%10;
        s=s+pow(rem,c);
        c--;
        temp=temp/10;
    }
    if(s==num) printf("True");
    else printf("False");
}