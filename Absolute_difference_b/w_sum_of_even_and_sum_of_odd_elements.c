#include<stdio.h>
#include<math.h>
int main(){
    int n,osum=0,esum=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0) esum=esum+a[i];
    else osum=osum+a[i];
    }
printf("%d",abs(osum-esum));
    
}