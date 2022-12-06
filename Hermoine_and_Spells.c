#include<stdio.h>
int main(){
    int a,b,c,hp=0,ans1,ans2,ans3;
    scanf("%d%d%d",&a,&b,&c);
    ans1=a+b;
    ans2=b+c;
    ans3=c+a;
    if(ans1>ans2 && ans1>ans3) printf("%d",ans1);
    else if(ans2>ans1 && ans2>ans3) printf("%d",ans2);
    else printf("%d",ans3); 
}