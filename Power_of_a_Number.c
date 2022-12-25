#include<stdio.h>
#include<math.h>
int main(){
    int x,y,m,ans,p;
    scanf("%d%d%d",&x,&y,&m);
    p=(pow(x,y));
    ans=p%m;
    printf("%d",ans);
}