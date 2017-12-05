#include<stdio.h>
#include<stdlib.h>

int main () {
    long int n,a=1,b=0,i;
    do{
        printf("Which number do you want?");scanf("%d", &n);
    }while(n<0);
    for(i=0;i<n;i++){
        a=a+b;
        b=a-b;
    }
    printf("%d ",a);
return 0;
}
// fibonacci sequence
