#include<stdio.h>
#include<stdlib.h>

int main () {
    int max_num,a=1,b=0,i;
    do{
        printf("Which number do you want?");scanf("%d", &max_num);
    }while(max_num<1);
    for(i=0;a<=max_num;i++){
        a=a+b;
        b=a-b;
    }
    printf("%d ",b);
return 0;
}

// max n koeto ne e po golqmo ot dadeno chislo
