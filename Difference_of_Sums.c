#include<stdio.h>
int main(){
    int n,sum=0,sum2=0,sqsum,ans;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    sum=sum+i*i;
    }
    for(int j=1;j<=n;j++){
        sum2=sum2+j;
        sqsum=sum2*sum2;
    }
    printf("%d",sqsum-sum);
}