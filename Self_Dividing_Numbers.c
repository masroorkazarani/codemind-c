#include<stdio.h>
int main(){
    int a,b,temp,rem,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        temp=i;
        while(temp>0){
            rem=temp%10;
            if(rem==0 || i%rem!=0) break;
            temp=temp/10;
        }
        if(temp==0) printf("%d ",i);
    }
}