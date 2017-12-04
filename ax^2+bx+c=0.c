#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int a,b,c,D;
    float x1,x2;
    printf("This program gives the values of X in the formula ax^2+bx+c=0\n");
    printf("a:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    printf("c:");scanf("%d",&c);
    D=(b*b)-(4*a*c);
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Every X is an answer");
            }else{
                printf("There is no possible X here");
            }
        }else{
            x1=(float)-c/b;
            printf("x=%f", x1);
        }
    }else{
        if(D==0){
            x1=(float)-b/(2*a);
            printf("D=0\nx=%f",x1);
        }else{
            if(D<0){
                printf("There is no possible X from the real numbers");
            }else{
                x1=(-b+sqrt(D))/(2*a);
                x2=(-b-sqrt(D))/(2*a);
                printf("D=%d\nx1=%f x2=%f",D,x1,x2);
            }
        }
    }

return 0;
}
