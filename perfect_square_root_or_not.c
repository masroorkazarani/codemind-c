#include<stdio.h>
int main(){
    int n,c=0,sq;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        sq=i*i;
        if(sq==n) c++;
    }
    if(c>0) printf("True");
    else printf("False");
}