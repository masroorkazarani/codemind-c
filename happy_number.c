#include<stdio.h>
#include<math.h>
int main(){
    int n,r,ans=0;
    scanf("%d",&n);
    while(n){
        r=n%10;
        ans=ans+pow(r,2);
        n=n/10;
        if(n==0 && ans<10){
            if(ans==7 || ans==1) printf("True");
            else printf("False");
        }
        else if(n==0 && ans>=10){
            n=ans;
            ans=0;
            r=0;
        }
    }
}