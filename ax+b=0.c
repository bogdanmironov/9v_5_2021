#include<stdio.h>
#include<stdlib.h>

int main () {
    int a,b;
    float x;
    printf("This program gives X from the formula ab+x=0\n");
    printf("a:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    if(a==0){
        if(b==0){
            printf("Every X is an answer");
        }else{
            printf("This... this just cant happen.");
        }
    }else{
        b=-b;
        x=(float)b/a;
    }
    printf("%f", x);
return 0;
}
