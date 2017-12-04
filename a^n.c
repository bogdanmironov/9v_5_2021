#include<stdio.h>
#include<stdlib.h>

int main () {
    int a,n,i,m;
    float ans;
    printf("This program gives you a^n\n");
    printf("a:");scanf("%d",&a);
    printf("n:");scanf("%d",&n);
    if(n==0) ans=1;
    else{
        if(n>0){
            m=n;
            ans=a;
            for(i=1;i<m;i++) ans=a*ans;
        }else{
            m=-n;
            ans=1.0/a;
            for(i=1;i<m;i++) ans=(1.0/a)*ans;
        }
    }
    printf("%.10f", ans);
return 0;
}
